Discription : loads heartbeat csv files into master csv
Name : Drew Locketz
Date : 8/3/2015
'''
import csv
import time
import os

def updateMaster():
	f = open('heartbeat.csv') #opens the heartbeat CSV file
	csv_f = csv.reader(f)
	g = open('Master.csv', 'a', newline = '\n') # opens the master csv file to append
	csv_g = csv.writer(g , delimiter = ',')
	for row in csv_f:
		csv_g.writerow(row) #writes each row of the heartbeat to the master
	print(row)
	f.close
	g.close



