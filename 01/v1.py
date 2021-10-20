import time


tic = time.perf_counter()
for i in range(1_000_000_00):
    pass
toc = time.perf_counter()

print(f"{toc - tic:0.4f} seconds")

# 