# This is a sample workload to test SimuBatchr
#
# It just waits for a specified amount of time

import argparse, time

# Print the identifier and delay for a specified amount of time
def RunTest(identifier, tDelay):
    print("Starting task " + identifier + " to run for " + str(tDelay) + "s")
    time.sleep(tDelay)
    print("Task " + identifier + " complete")

# Parse the arguments and launch
if __name__ == "__main__":
    args = argparse.ArgumentParser()
    args.add_argument("-time", help="How long this task will run (s)", default=10, type=int)
    args.add_argument("-name", help="The name of this process", type=str, default="Unnamed Workload")
    args = args.parse_args()
    RunTest(args.name, args.time)