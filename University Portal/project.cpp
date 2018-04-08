#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
	struct feedback  {
				int f_roll;
             	char feedBack[100];
			} fd;

			 struct comp {
                char name[20],departmenName[20];
                char Shikayat[100];
            }s1;
struct form{

                char name[20],father_name[20];
                char address[50],phone[20];
            }form1;

void student();
void department_record();
void complain();
void Dept();
void admin();
void department_record();
void admission();
void credits()
{
    int i;
    system("cls");
    printf("\t\t\t\t***WELCOME***\n\t\t\t    **||OUR UNIVERSITY||**\n\n\nThe NED University of Engineering & Technology, was established in March 1977 under an act of the Provincial Assembly of Sindh after upgrading of the former NED Government Engineering College, which was set up in");
    printf("1922. The NED University is thus one of the oldest institution in Pakistan for teaching and producing Engineering graduates. Prior to this, the D.J.Sindh College , used to run classes to train subordinates for the Sindh P.W.D., the Municipalities and Local Boards.");
    printf("\n\nOn August 29, 1921 College Principal C.S Shahani made a concerted effort to get Engineering Degree classes started to meet demands of Civil Engineers on the project for completion of the Sukkur Barrage. Application to this effect was made to the University of Bombay ");
    printf("through the Commissioner of Sindh, who was ex-officio president of Sindh Collegiate Association (a registered society of subscribers for providing higher education in Sindh). The Bombay University however rejected the application on the grounds of insufficient finance");
    printf(" and insisted on entirely separate buildings, laboratories for the engineering college as a separate institution. After collection of donations from the Puribai and Becharbai Trust, Vishandas Fatehchand Brothers and one huge donation (for that time) of Rs.150,000 from ");
    printf("Mr. Nadirshaw Edulji Dinshaw, the new college buildings and laboratories were constructed on separate land. The new college was originally the Prince of Wales Engineering College but later renamed in memory of Nadirshaw Edulji Dinshaw. The NED College was provisionally ");
    printf(" granted affiliation on 23-05-1923 by the University of Bombay for the first and second year courses in Civil Engineering and 78 students were provisionally admitted into first year classes in 1922. Permanent affiliation followed in February 1927.\n\n");
    printf("The first-full time Principal of NED Engineering College was Mr. G.N.Gokhale who joined on 1st July 1923. Prior to this, Rai Sahib Bhupatrai had acted as Honorary Principal. The first professor (and Vice Principal) was Mr. S.B. Jannarkar who, along with Mr. Gokhale,");
    printf("did all the spadework in organizing and equipping the various departments and ordering the equipment for the Power House, Boiler Room, Hydraulics Laboratory, Engine Room and Machine Shops.\n\n");
    printf(" The original NED Engineering College was housed in four blocks of buildings and two sheds. The main block was named as Seth Fatehchand Dewandas Khilnani Hall. The block housing the Power House, Electrical and Hydraulics Laboratories, and Workshops was named after Bai Puribai and Bacharbai.");
    printf(" Further additions were made to this block to provide accommodation for the Machine Shop on the ground floor and a (Mechanical) Drawing Hall on the first floor. The fourth block, completed in 1945, contained a Classroom and Clerk's Office on the ground floor and another (Civil) Drawing Hall on the first floor.\n\n");
    printf("Two sheds were also built, one to house the Carpentry and Smithy Shops, and the other, alongside the Electrical Laboratory and Engine Room, to train technicians. The total cost of the buildings was just over Rs. 265,000 and the cost of equipment (including machinery, electrical instruments;");
    printf(" models, steam, gas and oil engines; surveying and leveling instruments), books and furniture was just under Rs. 400,000. The college remained affiliated to the University of Bombay from its inception in 1922 to 1947, after which it was taken over by the Government of Sindh; renamed as NED Government Engineering");
    printf(" College and affiliated to the University of Sindh. After establishment of the University of Karachi in 1951, the affiliation of the College was transferred to this University. In 1964 a comprehensive plan was prepared to shift the college from its location in the congested downtown area (where no expansion was possible)");
    printf("to a new site adjoining the University of Karachi. The project was carried out with the assistance of the World Bank which provided Rs.118 millions in two phases and the College was shifted to its new 40 hectare Main Campus in 1975\n\n");
    printf("On the 1st of March, 1977 the NED Government Engineering College became the NED University of Engineering and Technology. From an enrolment of 50 students in 1923, the student population, at both undergraduate and graduate levels, has now gone up to nearly 7000. The faculty of Bio-Medical Engineering is located at NED LEJ ");
    printf("Campus for which the land and building - estimated value Rs. 350 million - was donated by (Late) Latif Ebrahim Jamal, a well known philanthropist\n\n");
    printf("The first Vice Chancellor of the University was Mr. A. M. Akhoond who was succeeded in sequential order by Prof. Dr. A. T. Khan, Prof. Dr. Jameel Ahmed Khan, Prof. Dr. M. Munir Hasan, Prof. Dr. A. Q. Qazi and Engr. Abul Kalam. Prof. Dr. M. Afzal Haque is the present Vice Chancellor.");
    printf("\n\nPress Eneter to continue.....");
        for(i=1;i<100;i++){
            if(getch()=='\r')
                break;
                }
              int main();
}
main()
{
		while(1){
    system("cls");
    	printf("\t\t\t\tWELCOME\n\n");
        printf("\t1-STUDENT ");
        printf("\t\t2-ADMINISTRATION");
        printf("\t\t3-ABOUT US");
        printf("\n\t4-Exit");
        int op;
        printf("\n\n\t\t\tENTER YOUR OPTION: ");
        scanf("%d",&op);
        switch(op)
        {
        case 1:
			student();	break;
       	case 2:
			admin();
            break;
 		case 3:
	      	credits();	break;
		case 4:
			exit(0);
		default:
		 printf("\n\n\t\tPLEASE SELECT THE RIGHT OPTION.....");
		 getch();
		 main();


    }
}
}

void student()
{
        int student_choice;
		FILE *fp,*EL,*C,*Fmech,*CISF,*BCITF;
		system("cls");
        printf("\t\t1-ADMISSION.");
        printf("\t\t2-DEPARTMANMTS");
        printf("\t\t3-Complain");
        printf("\t\t4-Back");
        
        int op;
        printf("\n\n\t\tENTER YOUR OPTION: ");
        scanf("%d",&op);
        switch(op)
	{
		case 1:
		    system("cls");

		    printf("1-MECHANICAL");
		    printf("\n2-CIVIL");
		    printf("\n3-BCIT");
		    printf("\n4-ELECTRONICS");
		    printf("\n5-COMPUTER INFORMATION  AND Engg ");
		    printf("\nENTER DEPARTMENT NAME: ");
		    scanf("%d",&student_choice);
            switch(student_choice)
                {
                     system("cls");

                    case 1:
					system("cls");
                printf("****FORM****\n");
                fp=fopen("MECHANICAL.rec","ab+");
			    printf("ENTER YOUR NAME: ");
                fflush(stdin);gets(form1.name);
                printf("ENTER YOUR FATHER NAME: ");
                gets(form1.father_name);
                printf("ENTER YOUR PHONE NUMBER: ");
                scanf("%s",form1.phone);
                printf("ENTER YOUR ADRESS: ");
               	fflush(stdin);
			    gets(form1.address);
            	fwrite(&form1,sizeof(form1),1,fp);
			    fclose(fp);
                printf("\nYOR RECORD HAS BEEN SENT TO THE SERVER..");
                getch();
				student();
        		break;

                case 2:
                system("cls");
                printf("****FORM****\n");
                fp=fopen("CIVIL.rec","ab+");
				printf("ENTER YOUR NAME: ");
                fflush(stdin);
			    gets(form1.name);
                printf("ENTER YOUR FATHER NAME: ");
                gets(form1.father_name);
                printf("ENTER YOUR PHONE NUMBER: ");
				scanf("%s",form1.phone);
                printf("ENTER YOUR ADRESS: ");
               	fflush(stdin);
			    gets(form1.address);
                fwrite(&form1,sizeof(form1),1,fp);
			    fclose(fp);
                printf("\nYOR RECORD HAS BEEN SENT TO THE SERVER..");
				getch();
                student();
				break;

                case 3:

                system("cls");
                printf("****FORM****\n");
                fp=fopen("BCIT.rec","ab+");
			    printf("ENTER YOUR NAME: ");
                fflush(stdin);
				gets(form1.name);
                printf("ENTER YOUR FATHER NAME: ");
                gets(form1.father_name);
                printf("ENTER YOUR PHONE NUMBER: ");
                scanf("%s",form1.phone);
                printf("ENTER YOUR ADRESS: ");
                fflush(stdin);
				gets(form1.address);
			   	fwrite(&form1,sizeof(form1),1,fp);
			    fclose(fp);
                printf("\nYOR RECORD HAS BEEN SENT TO THE SERVER..");
        		getch();
				student();
				break;

                case 4:
                    system("cls");
                printf("****FORM****\n");
                fp=fopen("ELECTRONICS.rec","ab+");
  				printf("ENTER YOUR NAME: ");
                fflush(stdin);
				gets(form1.name);
                printf("ENTER YOUR FATHER NAME: ");
                gets(form1.father_name);
                printf("ENTER YOUR PHONE NUMBER: ");
                scanf("%s",form1.phone);
				printf("ENTER YOUR ADRESS: ");
                fflush(stdin);
			    gets(form1.address);
                fwrite(&form1,sizeof(form1),1,fp);
				fclose(fp);
        		printf("\nYOR RECORD HAS BEEN SENT TO THE SERVER..");
        		getch();
                    student();
					break;

                    case 5:
                        system("cls");

                        printf("****FORM****\n");
						fp=fopen("CIS.rec","ab+");
                        printf("ENTER YOUR NAME: ");
                        fflush(stdin);
						gets(form1.name);
                        printf("ENTER YOUR FATHER NAME: ");
                        gets(form1.father_name);
                        printf("ENTER YOUR PHONE NUMBER: ");
                       	scanf("%s",form1.phone);
                        printf("ENTER YOUR ADRESS: ");
                        fflush(stdin);
						gets(form1.address);
		                fwrite(&form1,sizeof(form1),1,fp);
						fclose(fp);
		                printf("\nYOR RECORD HAS BEEN SENT TO THE SERVER..");
						getch();
						student();
						break;
		            }
        break;

                case 2:
                system("cls");
                Dept();
                    break;

		   FILE *complainfile;

		    case 3:
				system("cls");
			    printf("ENTER YOUR NAME: ");
                fflush(stdin);
                gets(s1.name);
                printf("ENTER YOUR DEPT NAME: ");
                gets(s1.departmenName);
                int N;
                printf("ENTER YOUR ROLL NUMBER: ");
                scanf("%d",&N);
                fflush(stdin);
                printf("ENTER YOUR COMPLAIN: ");
                gets(s1.Shikayat);
                    complainfile=fopen("complain.txt","a+");
                        if(complainfile==NULL)
                        {

                            printf("FILE NOT FOUND");
                            exit(1);
                        }
                    fprintf(complainfile,"NAME: %s \nDEPT: %s \nROLL NUMBER: %d \nCOMPLAIN: %s \n\n",s1.name,s1.departmenName,N,s1.Shikayat);
                    fclose(complainfile);
                    printf("THANKS..\n YOUR COMPLAIN HAS BEEN SUBMITTED..");
                    getch();
                break;
                case 4:
                	main();
	}
}
 void Dept()
{
		char dept_selection;
	printf("\t\t\t****DEPARTMENTS****");
	printf("\nDept Of MECHANICAL ENGG.(Press 'M' or 'm' for information).");
	printf("\nDept Of ELECTRONICS ENGG.(Press 'E' or 'e' for information).");
	printf("\nDept Of COMPUTER SCIENCE AND INFORMATION TECHNOLOGY.(Press 'B' or 'b' for information).");
	printf("\nDept Of COMPUTER SYSTEM & INFORMATION ENGG.(Press 'S' or 's' for information).");
	printf("\nDept Of CIVIL ENGG.(Press 'C' or 'c' for information).");
	printf("\n1OPTION: ");
		dept_selection=getche();
		getch();
			if(dept_selection=='M' || dept_selection=='m')
					{
						system("cls");
					printf("\t\tWelcome To Mechanical Engineering Department\n");
					printf("\tMED strives to attain an ideal balance between theoretical instruction and practical exposure to mechanical engineering with");
					printf("the help of qualified faculty and several well-equipped laboratories. We aspire to offer an education that ");
					printf("develops a firm foundation in mechanical engineering but allows the students to pursue their career goals in diverse fields");
					printf("\n\n\tOur flagship B.E. program is the starting point for careers in several disciplines. With an enrolment of over 800 students, this is one of the oldest and most valued mechanical engineering programs in the country. Well-established links");
					printf("with the industry allow two internship opportunities to most of the students in their third year of studies. In the final-year design project, students carry out detailed study and research into a particular problem and design a suitable solution, ");
					printf("under the guidance of academic and industrial professionals. B.E. graduates from MED find employment" );
					printf("opportunities in the industry throughout Pakistan and overseas. Alternatively, many opt to continue further studies in marine, automotive, industrial & manufacturing or any of several other specializations of mechanical engineering.");

					int j;
					for(j=0;j<100;j++)
						if(getch()=='\r')
						break;
							student();
					}
				else if(dept_selection=='E' || dept_selection=='e')
					{
						system("cls");
				printf("[  Introduction  ]");

					printf("\n\tThe Department of Electronic Engineering was established in February 1999. The first batch of 70 students was admitted during the 1999-2000 Academic session. The student intake is now being increased to 140 from the 2001-2002 Academic session.");
					printf("\n\n\tAt Undergraduate Level, the Department is offering B.E. Degree in Electronic and at Post Graduate level, the Department is offering Master of Engineering Degree in Electronic, Evening Programme.");
				int i;
				for(i=1;i<100;i++)
					if(getch()=='\r')
					student();
					
					}
				else if(dept_selection=='B' || dept_selection=='b')
					{

				system("cls");
			printf("\t\tWelcome to the Department of Computer Science and Software Engineering\n\n");
			printf("\n\tThe Department of Computer Science and Software Engineering is committed to maintain programmes of excellence in teaching, research, and service. Students are given the opportunity to obtain a well-founded understanding of the principles and theories of the science of computing and information technology. Our graduates are well ");
			printf("perceived and sought after by the industry where they have been successful in securing suitable positions. Our graduates are ready to enter the work force as productive computer scientists or to continue their education at the higher level. Their foundation is such that they can be life-long learners in their chosen field.\n\n\t");
			printf("In addition to responsibilities for program excellence and professional development, faculty members are committed to service through continuing education programs and research that contributes to their field. At the department level, students, faculty, and the program itself are frequently assessed to assure that this mission is being fulfilled.\n\n\t");
			printf("The demand for Computer Science graduates in the flourishing IT industry continues to multiply, providing excellent prospects for those with high quality skill sets. To augment this academic level the postgraduate programme with specialisation in Computer Science & Information Technology (CSIT) and Information Security (IS) are being offered by the department. ");
			printf("Currently, the Department is offering the following undergraduate and postgraduate programmes:");
			printf("\n1) BS (Computer Science)\n2) BE (Software Engineering)\n3) MS (Computer Science & Information Technology)\n4) MS (Information Security) ");
int i;
	for(i=1;i<100;i++)
	{
	printf("\n\nPRESS ENTER TO CONTINUE...");
		if(getch()=='\r')
			student();
					
			}
			
				}

				else if(dept_selection=='S' || dept_selection=='s')
					{
						system("cls");
							printf("\t\t****CIS DEPARTMENT****");
					printf("Due to the emerging field of Computer Systems Engineering and the increased demand of computing machines in the industry," );
					printf("a four year duration Bachelor of Engineering (Computer Systems) degree program was introduced at the NED University from July 1983.");
					printf("\n\tLater in 1986, the Department of Electrical Engineering was designated as Department of Electrical and Computer Systems Engineering.");
					printf("\n\tThe rapid advancements in the field of computer science and information technology in the last decade necessitated a separate department for the study, research and development of various branches of the Computer Systems Engineering.");
					printf("\n\tRealizing the importance of the field of Computer Systems in order to meet the challenges of the 21st century, the Department of Electrical and Computer Systems Engineering was bifurcated in July 1997 and a separate Department of Computer Systems Engineering was created.");
							int i;
							for(i=1;i<100;i++)
							{
							printf("\n\nPRESS ENTER TO CONTINUE...");
							if(getch()=='\r')
							student();
					}
				}
				else if(dept_selection=='C' || dept_selection=='c')
					{
							printf("****CIVIL ENGG.****");
							printf("The Faculty of Civil Engineering and Architecture seeks to impart its students the latest technical information to enable them to function meaningfully in their fields of employment. It also seeks to instill in them the importance of contributing their share to the community as a payback so that lesser privileged may also benefit. This faculty thus emphasizes to understand the importance of attainment of knowledge not merely for its functional significance such as prosperous future, but for its own sake to be beneficial in their lifelong activities.\n\t ");
							printf("The roots of the Faculty of Civil Engineering and Architecture can be traced back to the former NED Government Engineering College of year 1922 when Civil Engineering was the only graduate degree program with handful of students. Since then, not only this number has improved significantly, but the relentless determination to grow has caused this faculty to evolve during the past years into consisting of six departments in all, including five new ones, which offer a number of undergraduate and postgraduate programmes including facilitating in several PhD");
							printf("\n\n\tThe Faculty of Civil Engineering and Architecture is deeply committed to its students, and strives to provide challenging education in their area of specialty. The programmes we offer are designed to provide an access to the scientific innovations in addition to creating an understanding of the requirements of this country and its common man. The curriculum therefore consists of courses that embrace technical advancement in the relevant fields and our endowed faculty members endeavor to inculcate in our students an in-depth knowledge to train them for their");
							printf(" complete professional development. For this the classroom instructions are often combined with independent assignments and practical experience.");
							printf("\n\n\tAll the six departments under this faculty are facilitated with spacious classrooms and well equipped advanced laboratories supervised by well trained engineering staff. Being segment of one of the best public sector universities of Pakistan, this faculty of NED University also houses Pakistan’s first ever state-of-the-art laboratory of its kind, The Advanced Material Testing Laboratory, wherein testing of concrete elements is done under simulated earthquake environment. Likewise all the departments have advance equipments to facilitate learning of students in their respective fields.");
							printf("\n\n\tOur faculty also provides opportunities to students to involve in diversified and challenging research projects, and encourages them to keep pace with the teachers and to come jointly to debate issues of our country and suggest solutions to bring about changes. ");
                            printf("Our mission for our students is to make them responsible and conscientious citizens of this country.");
                            int i;
								for(i=1;i<100;i++)
								{
								printf("\n\nPRESS ENTER TO CONTINUE...");
									if(getch()=='\r')	
										student();
												
										}
        }
}

void adminmenu()
{
	 system("cls");
	         printf("\n\t\tWELCOME");
	         printf("\n\t\t1-DEPARTEMANT RECORD.");
	         printf("\n\t\t2-COMPLAINS");
	         printf("\n\t\t3-LOGOUT");
	         printf("\n\t\tOPTION HERE: ");
	       	
}
void admin()
{
		system("cls");
	int i,j,k,c=0;
    static char name[15],pass[15];
    static char n[2][6]={"REHAN","MARIO"};
    static char  p[2][8]={"BCIT123","ELDEPT1"};

	printf("\t\tENTER YOUR NAME PLEASE: ");
	fflush(stdin);
	gets(name);
	for(i=0;i<2;i++)
	{
	  if(stricmp(&n[i][0],name)==0)
	    {
	      c=1;
	      if(c==1)
		  printf("\n\t\tENTER YOUR PASSWORD PLEASE : ");
	    }
    }
    if(c==0)
	printf("\nWRONG USER NAME");
        for(j=0;j<7;j++)
        {
        	pass[j]=getch();
        	printf("*");
		}
	    c=0;
	    for(k=0;k<2;k++)
	    {

		  if(stricmp(&p[k][0],pass)==0)
	     {
	       
			 c=1;
	         if(c==1)
	       
		    while(1){
				adminmenu();
		    int option_admin;
	       		scanf("%d",&option_admin);
	       	switch(option_admin)
	       	{
	     		case 1:
	     			department_record();
                    break;
                case 2:
                	system("cls");
					char ch;
					FILE *comp;
					comp=fopen("complain.txt","rb+");
						if(comp==NULL)
							{			
								printf("FILE NOT FOUND");
								exit(1);

							}
					 	do{
						 	ch = fgetc(comp);
							 if( feof(comp) )
							      {
							       break ;
							      }
							      printf("%c", ch);
							   }while(1);
					fclose(comp);
				printf("\nPRESS  BACKSPACE Key for the main Menu.");
				int j;
				char checking_char;
					for(j=1;j<=1000;j++)
								{
										checking_char=getch();
									if(checking_char=='\b')							
										break;
								
								}					
					
				break;
				 // complain();
                case 3:
					main();
				    break;
				    
				    
				    default: printf("NOT AN OPTION.");
	
			   }
				
			}
		  }
     	}
        if(c==0)
     	printf("WRONG PASSWORD\n");
     	getch();



}
/*
void complain(){
					system("cls");
				char ch;
				FILE *comp;
					comp=fopen("complain.txt","rb+");
						if(comp==NULL)
							{
								
								
								
								printf("FILE NOT FOUND");
								exit(1);

							}
					 do
							   {
							      ch = fgetc(comp);
							      if( feof(comp) )
							      {
							         break ;
							      }
							      printf("%c", ch);
							   }while(1);
					fclose(comp);
				printf("\nPRESS  BACKSPACE Key for the main Menu.");
				int j;
				char checking_char;
					for(j=1;j<=1000;j++)
								{
										checking_char=getch();
									if(checking_char=='\b')							
								}					
						
					
				
				
				
    }
    */
void recordmenu()
{		system("cls");
	printf("\t\t1-BACHELOR OF COMPUTER SCIENCE AND INFORMATION");
				printf("\n\t\t2-ELECTRONICS");
				printf("\n\t\t3-MECHANICAL");
				printf("\n\t\t4-CIVIL");
				printf("\n\t\t5-COMPUTER INFORMATION & SYSTEM ENGG.");
				printf("\n\t\t6-BACK MENU");
				printf("\n\n\t\tENTER CHOICE");
				
}
void department_record()
{
   int found=0;
	system("cls");
	FILE *fp, *f; int x;
	char ch2,bch;

char number[20],ch[200],i=0,nname[20],nadd[50],fname[20],nph[20],array[2000];
int department_choice;
recordmenu();
scanf("%d",&department_choice);
 switch(department_choice)
 {

 	case 1:
					 system("cls");
 					printf("\n\t\t1-VIEW STUDENT RECORD.");
 					printf("\n\t\t2-UPDATE RECORD.");
 					printf("\n\t\t3-DELETE RECORD.");
 					printf("\n\t\t4-FIND A STUDENT.");

 					scanf("%d",&x);
			 		 	switch(x)
 					{
					case 1:
						system("cls");
						printf("**RECORDS***\n");
                    fp=fopen("BCIT.rec","rb");
                            if(fp==NULL)
                            {

                                printf("FILE NOT FOUND ");
                                exit(1);
                            }
                                while(fread(&form1,sizeof(form1),1,fp)==1){
                                    printf("%s\n%s\n%s\n%s\n\n\n",form1.name,form1.father_name,form1.phone,form1.address);
                                }

                                fclose(fp); 

						printf("\nPRESS  BACKSPACE Key for the main Menu.");
							int j;
							char checking_char;
								for(j=1;j<=1000;j++)
											{
													checking_char=getch();
												if(checking_char=='\b')
												department_record();
											}						

					 		break;


						case 2:

						system("cls");
						f=fopen("BCIT.rec","rb+");

									if(fp==NULL)
									{
									printf("FILE NOT FOUND.");
									exit(1);
								}


							printf("ENTER A PHONE NUMBER: ");
							fflush(stdin);
							scanf("%s",number);
							/*do{
									ch[i]=fgetc(fp);
									 array[i]=ch[i];

								}while(ch[i]!=EOF);
                                fclose(fp);         */

							//	f=fopen("BCIT.rec","rb+");
                               //fseek(f,sizeof(form1),SEEK_SET);

								while(fread(&form1,sizeof(form1),1,f)==1)
								{
											if(strcmp(number,form1.phone)==0)
											{
											printf("			NAME: %s\nFATHER NAME: %s\nPhonen Number: %s\nAddress: %s\n\n\n",form1.name,form1.father_name,form1.phone,form1.address);
                                            printf("			ENTER YOUR NAME: ");
                                            fflush(stdin);
                                            gets(form1.name);
                                            printf("			ENTER YOUR FATHER NAME: ");
                                            gets(form1.father_name);
                                            printf("			ENTER YOUR PHONE NUMBER: ");
                                            scanf("%s",form1.phone);
                                            printf("			ENTER YOUR ADRESS: ");
                                            fflush(stdin);
                                            gets(form1.address);

											fseek(f,-sizeof(form1),SEEK_CUR);
											fwrite(&form1,sizeof(form1),1,f);
											//	fprintf(f,"NAME: %s\nPhonen Number: %s\nAddress: %s\nDish: %s\n\n",nname,nph,nadd,d1.dish_name);
											//		printf("NAME: %s\nFATHER NAME: %s\nPhonen Number: %s\nAddress: %s\n\n\n",form1.name,form1.father_name,form1.phone,form1.address);
											//		getch();
											fclose(f);
										}
									}
					//fclose(f);
					

						printf("\nPRESS  BACKSPACE Key for the main Menu.");
							int jk;
							char checking_char1;
								for(jk=1;jk<=1000;jk++)
											{
													checking_char1=getch();
												if(checking_char1=='\b')
												department_record();
											}						

							break;
						case 3:
						    printf("			ENTER PHONE NUMBER: ");
						    scanf("%s",number);

                                        fp=fopen("BCIT.rec", "rb");
                                            if (!fp) {
                                                printf("			Unable to open file");
                                                exit(1);
                                            }
                                            FILE *fp_tmp;
                                            fp_tmp=fopen("tmp.rec", "wb");
                                            if (!fp_tmp) {
                                                printf("			Unable to open file temp file.");
                                                exit(1);
                                            }
                                         //  int found=0;
                                            while (fread(&form1,sizeof(form1),1,fp) != NULL) {
                                                if (strcmp (number, form1.phone) == 0) {
                                                    printf("			A record with requested name found and deleted.\n\n");
                                                    found=1;
                                                } else {
                                                    fwrite(&form1, sizeof(form1), 1, fp_tmp);
                                                }
                                            }
                                            if (! found) {
                                                printf("			No record(s) found ");
                                            }

                                            fclose(fp);
                                            fclose(fp_tmp);

                                            remove("BCIT.rec");
                                            rename("tmp.rec", "BCIT.rec");
														
												printf("\n			PRESS  BACKSPACE Key for the main Menu.");
							int jm;
							char checking_char2;
								for(jm=1;jm<=1000;jm++)
											{
													checking_char2=getch();
												if(checking_char2=='\b')
												department_record();
											}						

														
														
							break;
						case 4:
						    system("cls");
								printf("			ENTER THE PHONE NUMBER OF STUDENT: ");
								scanf("%s",number);
								fp=fopen("BCIT.rec","rb+");
								if(fp==NULL)
								{

									printf("FILE NOT FOUND.");
									exit(1);
								}
								while(fread(&form1,sizeof(form1),1,fp)==1)
								{
									if(strcmp(number,form1.phone)==0)
									{
									printf("			NAME: %s\nFATHER NAME: %s\nPhonen Number: %s\nAddress: %s\n\n\n",form1.name,form1.father_name,form1.phone,form1.address);
									getch();
									break;
									}
								}
								fclose(fp);
							}
						//	break;	
							printf("\n			PRESS  BACKSPACE Key for the main Menu.");
							int j;
							char checking_char;
								for(j=1;j<=1000;j++)
											{
													checking_char=getch();
												if(checking_char=='\b')
												department_record();
											}						


break;


case 2:

			 system("cls");
 					printf("\t\t\t***DEPARTMENT OF ELECTRONICS.***");
					 printf("\n\t\t1-VIEW STUDENT RECORD.");
 					printf("\n\t\t2-UPDATE RECORD.");
 					printf("\n\t\t3-DELETE RECORD.");
 					printf("\n\t\t4-FIND A STUDENT.");
						scanf("%d",&x);
						switch(x)
						{
							case 1:
									fp=fopen("ELECTRONICS.rec","rb+");
									if(fp==NULL)
									{
										printf("FILE NOT FOUND");
										exit(1);
									}
									 while(fread(&form1,sizeof(form1),1,fp)==1){
                                    printf("%s\n%s\n%s\n%s\n",form1.name,form1.father_name,form1.phone,form1.address);
                                }

								printf("\nPRESS  BACKSPACE Key for the main Menu.");
							int j;
							char checking_char;
								for(j=1;j<=1000;j++)
											{
													checking_char=getch();
												if(checking_char=='\b')
												department_record();
											}						


								break;
							case 2:

						system("cls");
						fp=fopen("ELECTRONICS.rec","rb+");

									if(fp==NULL)
									{
									printf("FILE NOT FOUND.");
									exit(1);
								}


							printf("			ENTER A PHONE NUMBER: ");
							fflush(stdin);
							scanf("%s",number);
							do{
									ch[i]=fgetc(fp);
									 array[i]=ch[i];

								}while(ch[i]!=EOF);
                                fclose(fp);

								f=fopen("ELECTRONICS.rec","rb+");
								while(fread(&form1,sizeof(form1),1,f)==1)
								{
											if(strcmp(number,form1.phone)==0)
											{
											printf("		NAME: %s\nFATHER NAME: %s\nPhonen Number: %s\nAddress: %s\n\n\n",form1.name,form1.father_name,form1.phone,form1.address);
											printf("		ENTER YOUR  NAME: ");
											fflush(stdin);
											gets(nname);
											printf("		ENTER YOUR FATHER NAME: ");
											gets(fname);
											printf("\n		ENTER YOUR NEW PHONE NUMBER: ");
											scanf("%s",nph);
											printf("\n		ENTER YOUR NEW ADDRESS: ");
											fflush(stdin);
											gets(nadd);

											strcpy(form1.name,nname);
											strcpy(form1.father_name,fname);
											strcpy(form1.phone,nph);
											strcpy(form1.address,nadd);

											fseek(f,-sizeof(form1),SEEK_CUR);
											fwrite(&form1,sizeof(form1),1,f);
												//fprintf(f,"NAME: %s\nPhonen Number: %s\nAddress: %s\nDish: %s\n\n",nname,nph,nadd,d1.dish_name);
													printf("			NAME: %s\nFATHER NAME: %s\nPhonen Number: %s\nAddress: %s\n\n\n",form1.name,form1.father_name,form1.phone,form1.address);
												//	getch();
												fclose(f); // add
										}
									}
					//	fclose(f);  mistake

							printf("\nPRESS  BACKSPACE Key for the main Menu.");
							int jl;
							char checking_char3;
								for(jl=1;jl<=1000;jl++)
											{
													checking_char3=getch();
												if(checking_char3=='\b')
												department_record();
											}						

										break;
							case 3:
						
						
						
						
						    printf("ENTER PHONE NUMBER: ");
						    scanf("%s",number);

                                        fp=fopen("ELECTRONICS.rec", "rb");
                                            if (!fp) {
                                                printf("Unable to open file");
                                                exit(1);
                                            }
                                            FILE *fp_tmp;
                                            fp_tmp=fopen("tmp.rec", "wb");
                                            if (!fp_tmp) {
                                                printf("Unable to open file temp file.");
                                                exit(1);
                                            }
                                        //   int found=0;
                                            while (fread(&form1,sizeof(form1),1,fp) != NULL) {
                                                if (strcmp (number, form1.phone) == 0) {
                                                    printf("A record with requested name found and deleted.\n\n");
                                                    found=1;
                                                } else {
                                                    fwrite(&form1, sizeof(form1), 1, fp_tmp);
                                                }
                                            }
                                            if (! found) {
                                                printf("No record(s) found ");
                                            }

                                            fclose(fp);
                                            fclose(fp_tmp);

                                            remove("ELECTRONICS.rec");
                                            rename("tmp.rec", "ELECTRONICS.rec");
														
												printf("\nPRESS  BACKSPACE Key for the main Menu.");
							int jm;
							char checking_char2;
								for(jm=1;jm<=1000;jm++)
											{
													checking_char2=getch();
												if(checking_char2=='\b')
												department_record();
											}						

														
														
						
									break;
							case 4:
								system("cls");
								printf("ENTER THE PHONE NUMBER OF STUDENT: ");
								scanf("%s",number);
								fp=fopen("ELECTRONICS.rec","rb+");
								if(fp==NULL)
								{

									printf("FILE NOT FOUND.");
									exit(1);
								}
								while(fread(&form1,sizeof(form1),1,fp)==1)
								{
									if(strcmp(number,form1.phone)==0)
									{
									printf("NAME: %s\nFATHER NAME: %s\nPhonen Number: %s\nAddress: %s\n\n\n",form1.name,form1.father_name,form1.phone,form1.address);
									getch();
									break;
									}
								}
								fclose(fp);
							}
printf("\nPRESS  BACKSPACE Key for the main Menu.");
							int jb;
							char checking_char4;
								for(jb=1;jb<=1000;jb++)
											{
													checking_char4=getch();
												if(checking_char4=='\b')
												department_record();
											}						

		break;

case 3:

			 system("cls");
 					printf("\t\t\t***DEPARTMENT OF MECHANICAL.***");
					 printf("\n\t\t1-VIEW STUDENT RECORD.");
 					printf("\n\t\t2-UPDATE RECORD.");
 					printf("\n\t\t3-DELETE RECORD.");
 					printf("\n\t\t4-FIND A STUDENT.");
 						scanf("%d",&x);
						switch(x)
						{
							case 1:
								system("cls");
								printf("***RECORDS***\n\n");
								
								fp=fopen("MECHANICAL.rec","rb+");
									if(fp==NULL)
									{
										printf("FILE NOT FOUND");
										exit(1);
									}
									 while(fread(&form1,sizeof(form1),1,fp)==1){
                                    printf("NAME: %s\nFATHER NAME: %s\nPHONE NUMBER: %s\nADRESS: %s\n\n",form1.name,form1.father_name,form1.phone,form1.address);
                                }

								printf("\nPRESS  BACKSPACE Key for the main Menu.");
							int j;
							char checking_char;
								for(j=1;j<=1000;j++)
											{
													checking_char=getch();
												if(checking_char=='\b')
												department_record();
											}						

								break;
							case 2:

							system("cls");
							fp=fopen("MECHANICAL.rec","rb+");

									if(fp==NULL)
									{
									printf("FILE NOT FOUND.");
									exit(1);
								}


							printf("ENTER A PHONE NUMBER: ");
							fflush(stdin);
							scanf("%s",number);
							do{
									ch[i]=fgetc(fp);
									 array[i]=ch[i];

								}while(ch[i]!=EOF);
                                fclose(fp);

								f=fopen("MECHANICAL.rec","rb+");
								while(fread(&form1,sizeof(form1),1,f)==1)
								{
											if(strcmp(number,form1.phone)==0)
											{
											printf("NAME: %s\nFATHER NAME: %s\nPhonen Number: %s\nAddress: %s\n\n\n",form1.name,form1.father_name,form1.phone,form1.address);
											printf("ENTER YOUR  NAME: ");
											fflush(stdin);
											gets(nname);
											printf("ENTER YOUR FATHER NAME: ");
											gets(fname);
											printf("ENTER YOUR NEW PHONE NUMBER: ");
											scanf("%s",nph);
											printf("ENTER YOUR NEW ADDRESS: ");
											fflush(stdin);
											gets(nadd);

											strcpy(form1.name,nname);
											strcpy(form1.father_name,fname);
											strcpy(form1.phone,nph);
											strcpy(form1.address,nadd);

											fseek(f,-sizeof(form1),SEEK_CUR);
											fwrite(&form1,sizeof(form1),1,f);
												//fprintf(f,"NAME: %s\nPhonen Number: %s\nAddress: %s\nDish: %s\n\n",nname,nph,nadd,d1.dish_name);
													printf("NAME: %s\nFATHER NAME: %s\nPhonen Number: %s\nAddress: %s\n\n\n",form1.name,form1.father_name,form1.phone,form1.address);
												//	getch();
												fclose(f); // add
										}
							}

							//fclose(f); mistake
							
								printf("\nPRESS  BACKSPACE Key for the main Menu.");
							int jc;
							char checking_char5;
								for(jc=1;jc<=1000;jc++)
											{
													checking_char5=getch();
												if(checking_char5=='\b')
												department_record();
											}						

									break;
							case 3:
						
						
						 printf("ENTER PHONE NUMBER: ");
						    scanf("%s",number);

                                        fp=fopen("MECHANICAL.rec", "rb");
                                            if (!fp) {
                                                printf("Unable to open file");
                                                exit(1);
                                            }
                                            FILE *fp_tmp;
                                            fp_tmp=fopen("tmp.rec", "wb");
                                            if (!fp_tmp) {
                                                printf("Unable to open file temp file.");
                                                exit(1);
                                            }
                                       //    int found=0;
                                            while (fread(&form1,sizeof(form1),1,fp) != NULL) {
                                                if (strcmp (number, form1.phone) == 0) {
                                                    printf("A record with requested name found and deleted.\n\n");
                                                    found=1;
                                                } else {
                                                    fwrite(&form1, sizeof(form1), 1, fp_tmp);
                                                }
                                            }
                                            if (! found) {
                                                printf("No record(s) found ");
                                            }

                                            fclose(fp);
                                            fclose(fp_tmp);

                                            remove("MECHANICAL.rec");
                                            rename("tmp.rec", "MECHANICAL.rec");
														
												printf("\nPRESS  BACKSPACE Key for the main Menu.");
							int jm;
							char checking_char2;
								for(jm=1;jm<=1000;jm++)
											{
													checking_char2=getch();
												if(checking_char2=='\b')
												department_record();
											}						
						
									break;
							case 4:
								system("cls");
								printf("ENTER THE PHONE NUMBER OF STUDENT: ");
								scanf("%s",number);
								fp=fopen("MECHANICAL.rec","rb+");
								if(fp==NULL)
								{

									printf("FILE NOT FOUND.");
									exit(1);
								}
								while(fread(&form1,sizeof(form1),1,fp)==1)
								{
									if(strcmp(number,form1.phone)==0)
									{
									printf("NAME: %s\nFATHER NAME: %s\nPhonen Number: %s\nAddress: %s\n\n\n",form1.name,form1.father_name,form1.phone,form1.address);
									getch();
									break;

								}

								fclose(fp);
								}
}

			printf("\nPRESS  BACKSPACE Key for the main Menu.");
							int jx;
							char checking_char6;
								for(jx=1;jx<=1000;jx++)
											{
													checking_char6=getch();
												if(checking_char6=='\b')
												department_record();
											}						

	

	break;



case 4:

					 system("cls");
 					printf("\t\t\t***DEPARTMENT OF CIVIL.***");
					 printf("\n\t\t1-VIEW STUDENT RECORD.");
 					printf("\n\t\t2-UPDATE RECORD.");
 					printf("\n\t\t3-DELETE RECORD.");
 					printf("\n\t\t4-FIND A STUDENT.");
					scanf("%d",&x);
						switch(x)
						{
							case 1:

								system("cls");
								printf("***RECORDS***\n\n");
								
								fp=fopen("CIVIL.rec","rb+");
									if(fp==NULL)
									{
										printf("FILE NOT FOUND");
										exit(1);
									}
									 while(fread(&form1,sizeof(form1),1,fp)==1){
                                    printf("NAME: %s\nFATHER NAME: %s\nPHONE NUMBER: %s\nADRESS: %s\n\n",form1.name,form1.father_name,form1.phone,form1.address);
                                }

								printf("\nPRESS  BACKSPACE Key for the main Menu.");
							int j;
							char checking_char;
								for(j=1;j<=1000;j++)
											{
													checking_char=getch();
												if(checking_char=='\b')
												department_record();
											}						

							
								break;
							case 2:
									system("cls");
						fp=fopen("CIVIL.rec","rb+");

									if(fp==NULL)
									{
									printf("FILE NOT FOUND.");
									exit(1);
								}


							printf("ENTER A PHONE NUMBER: ");
							fflush(stdin);
							scanf("%s",number);
							do{
									ch[i]=fgetc(fp);
									 array[i]=ch[i];

								}while(ch[i]!=EOF);
                                fclose(fp);

								f=fopen("CIVIL.rec","rb+");
								while(fread(&form1,sizeof(form1),1,f)==1)
								{
											if(strcmp(number,form1.phone)==0)
											{
											printf("NAME: %s\nFATHER NAME: %s\nPhonen Number: %s\nAddress: %s\n\n\n",form1.name,form1.father_name,form1.phone,form1.address);
											printf("ENTER YOUR  NAME: ");
											fflush(stdin);
											gets(nname);
											printf("ENTER YOUR FATHER NAME: ");
											gets(fname);
											printf("\nENTER YOUR NEW PHONE NUMBER: ");
											scanf("%s",nph);
											printf("\nENTER YOUR NEW ADDRESS: ");
											fflush(stdin);
											gets(nadd);

											strcpy(form1.name,nname);
											strcpy(form1.father_name,fname);
											strcpy(form1.phone,nph);
											strcpy(form1.address,nadd);

											fseek(f,-sizeof(form1),SEEK_CUR);
											fwrite(&form1,sizeof(form1),1,f);
												//fprintf(f,"NAME: %s\nPhonen Number: %s\nAddress: %s\nDish: %s\n\n",nname,nph,nadd,d1.dish_name);
													printf("NAME: %s\nFATHER NAME: %s\nPhonen Number: %s\nAddress: %s\n\n\n",form1.name,form1.father_name,form1.phone,form1.address);
												//	getch();
												fclose(f); // add
										}
									}
					//fclose(f); mistake
												printf("\nPRESS  BACKSPACE Key for the main Menu.");
							int jd;
							char checking_char7;
								for(jd=1;jd<=1000;jd++)
											{
													checking_char7=getch();
												if(checking_char7=='\b')
												department_record();
											}	

									break;
							case 3:
					
					system("cls");
					
						 printf("ENTER PHONE NUMBER: ");
						    scanf("%s",number);

                                        fp=fopen("CIVIL.rec", "rb");
                                            if (!fp) {
                                                printf("Unable to open file");
                                                exit(1);
                                            }
                                            FILE *fp_tmp;
                                            fp_tmp=fopen("tmp.rec", "wb");
                                            if (!fp_tmp) {
                                                printf("Unable to open file temp file.");
                                                exit(1);
                                            }
                                  //         int found=0;
                                            while (fread(&form1,sizeof(form1),1,fp) != NULL) {
                                                if (strcmp (number, form1.phone) == 0) {
                                                    printf("A record with requested name found and deleted.\n\n");
                                                    found=1;
                                                } else {
                                                    fwrite(&form1, sizeof(form1), 1, fp_tmp);
                                                }
                                            }
                                            if (! found) {
                                                printf("No record(s) found ");
                                            }

                                            fclose(fp);
                                            fclose(fp_tmp);

                                            remove("CIVIL.rec");
                                            rename("tmp.rec", "CIVIL.rec");
														
												printf("\nPRESS  BACKSPACE Key for the main Menu.");
							int jm;
							char checking_char2;
								for(jm=1;jm<=1000;jm++)
											{
													checking_char2=getch();
												if(checking_char2=='\b')
												department_record();
											}						
						
									break;
							case 4:

								system("cls");
								printf("ENTER THE PHONE NUMBER OF STUDENT: ");
								scanf("%s",number);
								fp=fopen("CIVIL.rec","rb+");
								if(fp==NULL)
								{

									printf("FILE NOT FOUND.");
									exit(1);
								}
								while(fread(&form1,sizeof(form1),1,fp)==1)
								{
									if(strcmp(number,form1.phone)==0)
									{
									printf("NAME: %s\nFATHER NAME: %s\nPhonen Number: %s\nAddress: %s\n\n\n",form1.name,form1.father_name,form1.phone,form1.address);
									getch();
									break;
									}
								}
								fclose(fp);
						}

				
						printf("\nPRESS  BACKSPACE Key for the main Menu.");
							int je;
							char checking_char8;
								for(je=1;je<=1000;je++)
											{
													checking_char8=getch();
												if(checking_char8=='\b')
												department_record();
											}						

						
	break;


	case 5:

				 system("cls");
 					printf("\t\t\t***CIS.***");
					printf("\n\t\t1-VIEW STUDENT RECORD.");
 					printf("\n\t\t2-UPDATE RECORD.");
 					printf("\n\t\t3-DELETE RECORD.");
 					printf("\n\t\t4-FIND A STUDENT.");
 					scanf("%d",&x);
						switch(x)
						{
							case 1:
								system("cls");
								printf("***RECORDS***\n\n");
								
								fp=fopen("CIS.rec","rb+");
									if(fp==NULL)
									{
										printf("FILE NOT FOUND");
										exit(1);
									}
									 while(fread(&form1,sizeof(form1),1,fp)==1){
                                    printf("NAME: %s\nFATHER NAME: %s\nPHONE NUMBER: %s\nADRESS: %s\n\n",form1.name,form1.father_name,form1.phone,form1.address);
                                }

								printf("\nPRESS  BACKSPACE Key for the main Menu.");
							int j;
							char checking_char;
								for(j=1;j<=1000;j++)
											{
													checking_char=getch();
												if(checking_char=='\b')
												department_record();
											}						

							
								break;
							case 2:

									system("cls");
						fp=fopen("CIS.rec","rb+");

									if(fp==NULL)
									{
									printf("FILE NOT FOUND.");
									exit(1);
								}


							printf("ENTER A PHONE NUMBER: ");
							fflush(stdin);
							scanf("%s",number);
							do{
									ch[i]=fgetc(fp);
									 array[i]=ch[i];

								}while(ch[i]!=EOF);
                                fclose(fp);

								f=fopen("CIS.rec","rb+");
								while(fread(&form1,sizeof(form1),1,f)==1)
								{
											if(strcmp(number,form1.phone)==0)
											{
											printf("NAME: %s\nFATHER NAME: %s\nPhonen Number: %s\nAddress: %s\n\n\n",form1.name,form1.father_name,form1.phone,form1.address);
											printf("ENTER YOUR  NAME: ");
											fflush(stdin);
											gets(nname);
											printf("ENTER YOUR FATHER NAME: ");
											gets(fname);
											printf("\nENTER YOUR NEW PHONE NUMBER: ");
											scanf("%s",nph);
											printf("\nENTER YOUR NEW ADDRESS: ");
											fflush(stdin);
											gets(nadd);

											strcpy(form1.name,nname);
											strcpy(form1.father_name,fname);
											strcpy(form1.phone,nph);
											strcpy(form1.address,nadd);

											fseek(f,-sizeof(form1),SEEK_CUR);
											fwrite(&form1,sizeof(form1),1,f);
												//fprintf(f,"NAME: %s\nPhonen Number: %s\nAddress: %s\nDish: %s\n\n",nname,nph,nadd,d1.dish_name);
													printf("NAME: %s\nFATHER NAME: %s\nPhonen Number: %s\nAddress: %s\n\n\n",form1.name,form1.father_name,form1.phone,form1.address);
												//	getch();
												fclose(f); // add
										}
									}
				//	fclose(f); mistake

					getch();

									break;
							case 3:
									
										system("cls");
					
						 printf("ENTER PHONE NUMBER: ");
						    scanf("%s",number);

                                        fp=fopen("CIS.rec", "rb");
                                            if (!fp) {
                                                printf("Unable to open file");
                                               exit(1);
                                            }
                                            FILE *fp_tmp;
                                            fp_tmp=fopen("tmp.rec", "wb");
                                            if (!fp_tmp) {
                                                printf("Unable to open file temp file.");
                                                exit(1);
                                            }
                                 //          int found=0;
                                            while (fread(&form1,sizeof(form1),1,fp) != NULL) {
                                                if (strcmp (number, form1.phone) == 0) {
                                                    printf("A record with requested name found and deleted.\n\n");
                                                    found=1;
                                                } else {
                                                    fwrite(&form1, sizeof(form1), 1, fp_tmp);
                                                }
                                            }
                                            if (! found) {
                                                printf("No record(s) found ");
                                            }

                                            fclose(fp);
                                            fclose(fp_tmp);

                                            remove("CIS.rec");
                                            rename("tmp.rec", "CIS.rec");
														
												printf("\nPRESS  BACKSPACE Key for the main Menu.");
							int jm;
							char checking_char2;
								for(jm=1;jm<=1000;jm++)
											{
												checking_char2=getch();
												if(checking_char2=='\b')
												department_record();
											}						
						
				
									
									
									
									break;
							case 4:
									system("cls");
								printf("ENTER THE PHONE NUMBER OF STUDENT: ");
								scanf("%s",number);
								fp=fopen("CIS.rec","rb+");
								if(fp==NULL)
								{

									printf("FILE NOT FOUND.");
									exit(1);
								}
								while(fread(&form1,sizeof(form1),1,fp)==1)
								{
									if(strcmp(number,form1.phone)==0)
									{
									printf("NAME: %s\nFATHER NAME: %s\nPhonen Number: %s\nAddress: %s\n\n\n",form1.name,form1.father_name,form1.phone,form1.address);
									getch();
									break;
									}
								}
								fclose(fp);
							}

								 	break;
								 	
    case 6 : 
       adminmenu();
        break;

		}

	}


