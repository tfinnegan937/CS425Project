# The VOMS Protocol VR Project

__For CS 426 Senior Projects__

__University of Nevada, Reno__

__Computer Science and Engineering Department__

__Spring 2021__

__Team #3__

- Ryan Gorman
 
- Timothy Finnegan
 
- Isak Ohman

## External Advisors
- Dr. Alireza Tavakkoli -- Professor of Computer Science and Engineering at the University of Nevada, Reno
- Dr. Nicholas Murray   -- Assistant Professor of Community Health Sciences at the University of Nevada, Reno

## What is VOMS Protocol VR?

The VOMS Protocol VR project is a system that seeks to be the first step in bringing the concussion diagnosis process into the modern era. Developed for the Vive Pro-Eye in Unreal Engine and the Qt5 UI framework, VOMS Protocol VR (VPVR) takes existing methods of concussion detection and implements them in virtual reality. Currently, the gold standard for rapid concussion detection is the Vestibular/Oculomotor Motor Screening (VOMS) Assessment, a series of exercises with the head and eye that attempt to induce symptoms in a patient in order to quickly identify a concussion. This screening is often done without the assistance of technology, and relies upon a patient's subjective report of his symptoms. With the rise of Machine Learning and Artificial Intelligence, it is possible that this process can be supplanted with an automated system that uses data and modelling to more accurately detect concussions. No such model has thus far been created due to the lack of available research into the topic, and the sparsity of data upon which such a model could be trained. 

The goal of VPVR is to create a platform that can be used to both clinically diagnose concussions, and generate the necessary data with which future projects can train artificial intelligence for automated diagnosis. While the VPVR system administers the VOMS protocol automatically to the patient (with guidance from an attending physician), the eye-tracking sensors within the Vive Pro-Eye headset collect and record information on the patient's eye movements. As eye movement is often noticeably impaired by the presence of a concussion, it is the hope of the VPVR team that this data can be used to train a model that can automatically and accurately detect a concussion at the site in which a concussion has occurred. 


<div id="resources"></div>
## Project Resources and Related Information

### Problem Domain Book

_Is Soccer Bad for Children’s Heads?_ by Margie Patlak, 2002.  
- While focused on the effect of soccer on children, it does detail some of the problems with detecting and diagnosing concussions.

Sports-Related Concussions in Youth: Improving the Science, Changing the Culture by the Committee on Sports-Related Concussions in Youth; Board on Children, Youth, and Families; Institute of Medicine; National Research Council; Graham R, Rivara FP, Ford MA, et al., 2014.  
[Link to book online](https://www.ncbi.nlm.nih.gov/books/NBK185340/)  
- An overview of concussions, methods of detection, and the consequences of concussions on youth.

### Related Websites

[The Center for Disease Control: Concussion Signs and Symptoms](https://www.cdc.gov/headsup/basics/concussion_symptoms.html)  
- General overview on concussions.

[The Vive Pro Eye Home Page](https://enterprise.vive.com/us/product/vive-pro-eye-office/)  
- The headset we are developing the project for. 

### Academic Resources

“Concussions and their Consequences” by Charles H. Tator  
doi:10.1503/cmaj.120039  
[Link to paper online](https://www.cmaj.ca/content/185/11/975)  
- Overview of current concussion detection methods and possibilities for improvement.

"Head-Impact-Measurement Devices: A Systematic Review" by Kathryn L O'Conner, et al.  
doi:10.4085/1062-6050.52.2.05  
[Link to paper online](https://meridian.allenpress.com/jat/article/52/3/206/191408/Head-Impact-Measurement-Devices-A-Systematic)  
- Study of existing concussion detection devices for state-of-field analysis.

"Concussion Evaluation and Management: An Osteopathic Perspective" by Hallie Zwibel, et al.  
doi:10.7556/jaoa.2018.144  
[Link to paper online](https://jaoa.org/article.aspx?articleid=2703382)  
- Possible alternative to the VOMS test, however not one that can be implemented with head-mounted VR or eye-tracking.


### Related News

[Sony Patent Reveals Asymmetric VR Gameplay Concept](https://uploadvr.com/sony-asymmetric-vr-patent/) by Harry Baker  
- Directly relates to how we plan to model our own project: the subject inside VR while the physician controls it. This shows similar approaches in the entertainment field.

[Photonics research makes smaller, more efficient VR, augmented reality tech possible](https://www.sciencedaily.com/releases/2021/02/210201115943.htm) by North Carolina State University  
- Better display technology to possibly reduce weight, electrical consumption, and cost of VR headsets in the future. This would in turn make our project more affordable if re-implemented.

[Virtual Reality (VR) Headsets Market Size To Reach $19.78 Billion By 2025, Owing To High Demand For Smartphone-Enabled & PC-Enabled VR Headsets](https://finance.yahoo.com/news/virtual-reality-vr-headsets-market-101000618.html) by Million Insights  
- Overview of the growth and future prospects of the VR headset sector. As this grows, the cost of our project should decrease.

