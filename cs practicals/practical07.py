import matplotlib.pyplot as plt
# Define class limits (bins) and frequencies
class_limits = ["1-5", "5-10", "10-15", "15-20", "20 and above"] # Class limits as strings
frequencies = [7, 12, 5, 8, 6] # Corresponding frequencies for the bins
# Define units for each class
units = [10, 20, 15, 25, 10] # Corresponding units for each bin
# Calculate frequency density as frequency divided by units
frequency_density = [freq / unit for freq, unit in zip(frequencies, units)]
# Create a histogram with specified class limits and frequency density
plt.bar(class_limits, frequency_density, align='center', edgecolor='black')
# Add labels and a title
plt.xlabel('Class Limits')
plt.ylabel('Frequency Density')
plt.title('Histogram with Class Limits and Frequency Density')
# Rotate the x-axis labels for better readability
plt.xticks(rotation=45)
# Display the histogram
plt.show()
