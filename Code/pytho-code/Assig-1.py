import numpy as np

import matplotlib.pyplot as plt 
 

  
# creating the dataset

data = {'0-10' : 10, '10-20' : 9, '20-30' : 25, '30-40' : 30, '40-50' : 16, '50-60' : 10}

courses = list(data.keys())

values = list(data.values())

  

fig = plt.figure(figsize = (10, 5))
 
# creating the bar plot

plt.bar(courses, values, color ='maroon', 

        width = 0.4)
 

plt.xlabel("Marks Of Students")

plt.ylabel("No of Students")

plt.title("Class-Interval VS Frequency")
plt.show()