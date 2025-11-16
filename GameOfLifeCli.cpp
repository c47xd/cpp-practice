/*FIRST VERSION WITHOUT MODES AND FIXED */


// #include<iostream>
// #include<unistd.h>
// using namespace std;
// int main(){
//     char z = '*';
//     char x = '.';
//     int row , col,living_neigh = 0 , limit , grid_number,max_iterations,pattern_choice;
//     grid_number = 2;
//     row = 1 ; col = 1;
// int &gn = grid_number;
//     char A[gn][gn];

// // for(int i = 0; i < gn; i++){
// //     for(int j = 0; j < gn; j++){
// //         if((i==2 && j==1) || (i==3 && j==3) || 
// //            (i==4 && j==0) || (i==4 && j==1) || 
// //            (i==4 && j==4) || (i==4 && j==5) || (i==4 && j==6)){
// //             A[i][j] = z;
// //         }
// //         else {A[i][j] = x;}
// //     }
// // }

// cout<<"Surprise urself :) \n";
// cout<<"Choose a number between 1 to 11 \n";
// cin>>pattern_choice;
// switch(pattern_choice) {
//     case 1: // GLIDER
//         grid_number = 10;
//         max_iterations = 40;
//         for(int i = 0; i < gn; i++){
//             for(int j = 0; j < gn; j++){
//                 if((i==0 && j==1) || (i==1 && j==2) || (i==2 && j==0) || 
//                    (i==2 && j==1) || (i==2 && j==2)){
//                     A[i][j] = z;
//                 }
//                 else {A[i][j] = x;}
//             }
//         }
//         break;

//     case 2: // BLINKER
//         grid_number = 5;
//         max_iterations = 10;
//         for(int i = 0; i < gn; i++){
//             for(int j = 0; j < gn; j++){
//                 if((i==2 && j==1) || (i==2 && j==2) || (i==2 && j==3)){
//                     A[i][j] = z;
//                 }
//                 else {A[i][j] = x;}
//             }
//         }
//         break;

//     case 3: // TOAD
//         grid_number = 6;
//         max_iterations = 12;
//         for(int i = 0; i < gn; i++){
//             for(int j = 0; j < gn; j++){
//                 if((i==2 && j==2) || (i==2 && j==3) || (i==2 && j==4) || 
//                    (i==3 && j==1) || (i==3 && j==2) || (i==3 && j==3)){
//                     A[i][j] = z;
//                 }
//                 else {A[i][j] = x;}
//             }
//         }
//         break;

//     case 4: // BEACON
//         grid_number = 6;
//         max_iterations = 12;
//         for(int i = 0; i < gn; i++){
//             for(int j = 0; j < gn; j++){
//                 if((i==1 && j==1) || (i==1 && j==2) || (i==2 && j==1) || 
//                    (i==3 && j==4) || (i==4 && j==3) || (i==4 && j==4)){
//                     A[i][j] = z;
//                 }
//                 else {A[i][j] = x;}
//             }
//         }
//         break;

//     case 5: // PULSAR
//         grid_number = 17;
//         max_iterations = 30;
//         for(int i = 0; i < gn; i++){
//             for(int j = 0; j < gn; j++){
//                 if((i==2 && j==4) || (i==2 && j==5) || (i==2 && j==6) || 
//                    (i==2 && j==10) || (i==2 && j==11) || (i==2 && j==12) ||
//                    (i==4 && j==2) || (i==5 && j==2) || (i==6 && j==2) ||
//                    (i==4 && j==7) || (i==5 && j==7) || (i==6 && j==7) ||
//                    (i==4 && j==9) || (i==5 && j==9) || (i==6 && j==9) ||
//                    (i==4 && j==14) || (i==5 && j==14) || (i==6 && j==14) ||
//                    (i==7 && j==4) || (i==7 && j==5) || (i==7 && j==6) ||
//                    (i==7 && j==10) || (i==7 && j==11) || (i==7 && j==12) ||
//                    (i==9 && j==4) || (i==9 && j==5) || (i==9 && j==6) ||
//                    (i==9 && j==10) || (i==9 && j==11) || (i==9 && j==12) ||
//                    (i==10 && j==2) || (i==11 && j==2) || (i==12 && j==2) ||
//                    (i==10 && j==7) || (i==11 && j==7) || (i==12 && j==7) ||
//                    (i==10 && j==9) || (i==11 && j==9) || (i==12 && j==9) ||
//                    (i==10 && j==14) || (i==11 && j==14) || (i==12 && j==14) ||
//                    (i==14 && j==4) || (i==14 && j==5) || (i==14 && j==6) ||
//                    (i==14 && j==10) || (i==14 && j==11) || (i==14 && j==12)){
//                     A[i][j] = z;
//                 }
//                 else {A[i][j] = x;}
//             }
//         }
//         break;

//     case 6: // PENTA-DECATHLON
//         grid_number = 18;
//         max_iterations = 60;
//         for(int i = 0; i < gn; i++){
//             for(int j = 0; j < gn; j++){
//                 if((i==5 && j==4) || (i==6 && j==4) || (i==7 && j==4) || 
//                    (i==8 && j==4) || (i==9 && j==4) || (i==10 && j==4) ||
//                    (i==11 && j==4) || (i==12 && j==4) || (i==5 && j==5) ||
//                    (i==7 && j==5) || (i==8 && j==5) || (i==9 && j==5) ||
//                    (i==10 && j==5) || (i==12 && j==5) || (i==5 && j==6) ||
//                    (i==6 && j==6) || (i==7 && j==6) || (i==8 && j==6) ||
//                    (i==9 && j==6) || (i==10 && j==6) || (i==11 && j==6) || (i==12 && j==6)){
//                     A[i][j] = z;
//                 }
//                 else {A[i][j] = x;}
//             }
//         }
//         break;

//     case 7: // LIGHTWEIGHT SPACESHIP (LWSS)
//         grid_number = 10;
//         max_iterations = 40;
//         for(int i = 0; i < gn; i++){
//             for(int j = 0; j < gn; j++){
//                 if((i==2 && j==1) || (i==2 && j==4) || (i==3 && j==5) ||
//                    (i==4 && j==1) || (i==4 && j==5) || (i==5 && j==2) ||
//                    (i==5 && j==3) || (i==5 && j==4) || (i==5 && j==5)){
//                     A[i][j] = z;
//                 }
//                 else {A[i][j] = x;}
//             }
//         }
//         break;

//     case 8: // ACORN
//         grid_number = 20;
//         max_iterations = 5206;
//         for(int i = 0; i < gn; i++){
//             for(int j = 0; j < gn; j++){
//                 if((i==2 && j==1) || (i==3 && j==3) || (i==4 && j==0) ||
//                    (i==4 && j==1) || (i==4 && j==4) || (i==4 && j==5) || (i==4 && j==6)){
//                     A[i][j] = z;
//                 }
//                 else {A[i][j] = x;}
//             }
//         }
//         break;

//     case 9: // DIEHARD
//         grid_number = 12;
//         max_iterations = 130;
//         for(int i = 0; i < gn; i++){
//             for(int j = 0; j < gn; j++){
//                 if((i==3 && j==6) || (i==4 && j==0) || (i==4 && j==1) ||
//                    (i==5 && j==1) || (i==5 && j==5) || (i==5 && j==6) || (i==5 && j==7)){
//                     A[i][j] = z;
//                 }
//                 else {A[i][j] = x;}
//             }
//         }
//         break;

//     case 10: // R-PENTOMINO
//         grid_number = 15;
//         max_iterations = 1103;
//         for(int i = 0; i < gn; i++){
//             for(int j = 0; j < gn; j++){
//                 if((i==5 && j==5) || (i==5 && j==6) || (i==6 && j==4) ||
//                    (i==6 && j==5) || (i==7 && j==5)){
//                     A[i][j] = z;
//                 }
//                 else {A[i][j] = x;}
//             }
//         }
//         break;

//     case 11: // GOSPER GLIDER GUN
//         grid_number = 40;
//         max_iterations = 500; // Runs forever, but 500 shows the pattern
//         for(int i = 0; i < gn; i++){
//             for(int j = 0; j < gn; j++){
//                 if((i==0 && j==24) || (i==1 && j==22) || (i==1 && j==24) ||
//                    (i==2 && j==12) || (i==2 && j==13) || (i==2 && j==20) ||
//                    (i==2 && j==21) || (i==2 && j==34) || (i==2 && j==35) ||
//                    (i==3 && j==11) || (i==3 && j==15) || (i==3 && j==20) ||
//                    (i==3 && j==21) || (i==3 && j==34) || (i==3 && j==35) ||
//                    (i==4 && j==0) || (i==4 && j==1) || (i==4 && j==10) ||
//                    (i==4 && j==16) || (i==4 && j==20) || (i==4 && j==21) ||
//                    (i==5 && j==0) || (i==5 && j==1) || (i==5 && j==10) ||
//                    (i==5 && j==14) || (i==5 && j==16) || (i==5 && j==17) ||
//                    (i==5 && j==22) || (i==5 && j==24) || (i==6 && j==10) ||
//                    (i==6 && j==16) || (i==6 && j==24) || (i==7 && j==11) ||
//                    (i==7 && j==15) || (i==8 && j==12) || (i==8 && j==13)){
//                     A[i][j] = z;
//                 }
//                 else {A[i][j] = x;}
//             }
//         }
//         break;
// }   
//     cout<<gn;
//     char B[gn][gn];


//     for(int k = 0 ; k < max_iterations ; k++){

// //Forms Another new array with updated values for once 
//     for(int q = 0 ; q < gn ; q++){
//         for(int p = 0 ; p < gn ; p++){
//             row = q ; col = p;
//             living_neigh = 0;

//     // LOGIC OF LIVING AND DYING FOR GIVEN ROW , COL // 

//             for(int a = -1 ; a < 2 ; a++){
//             for(int b = -1 ; b < 2 ; b++){
//             if(row+a >=0 && col+b >= 0 &&((a != 0 || b != 0)) && (row+a < gn && col+b < gn)  ){
//             if(A[row+a][col+b] == z){ //checking state of neighbour 
                
//                 // cout<<"Its living\n"<<row+a<<col+b<<endl;
//                 living_neigh++;
            
//             }
//         }
//     }
//     }
//     if(A[row][col] == z ){
//         if(living_neigh > 3 || living_neigh < 2 ){B[row][col] = x;}
//         else{B[row][col] = z;}
//     }
//     if (A[row][col] == x){
//         if(living_neigh == 3){B[row][col] = z;}
//         else{B[row][col] = x;}
//     }
// }

//         }

// for(int i = 0 ; i < gn ; i++){
//     for(int j = 0 ; j < gn ; j++){
//         A[i][j] = B[i][j];
//         cout<<B[i][j];
//         B[i][j] = x;

//     }
//     cout<<endl;
// }
// sleep(1);
// system("clear");
//     }
    

//     return 0;

//     }


/*FINAL VERSION USED AI TO OPTIMIZE AND ADD THAT OPTION HERE */

#include<iostream>
#include<unistd.h>
using namespace std;

int main(){
    const int MAX_SIZE = 50; // Maximum grid size
    char z = '*';
    char x = '.';
    int grid_number, max_iterations, pattern_choice;
    
    cout << "╔══════════════════════════════════════╗\n";
    cout << "║   Conway's Game of Life - Patterns  ║\n";
    cout << "╚══════════════════════════════════════╝\n\n";
    cout << "Choose a pattern (1-11):\n";
    cout << "1. Glider          - Moves diagonally\n";
    cout << "2. Blinker         - Simple oscillator\n";
    cout << "3. Toad            - Period 2\n";
    cout << "4. Beacon          - Period 2\n";
    cout << "5. Pulsar          - Period 3\n";
    cout << "6. Penta-Decathlon - Period 15\n";
    cout << "7. LWSS            - Spaceship\n";
    cout << "8. Acorn           - Methuselah (5206 gens!)\n";
    cout << "9. Diehard         - Dies after 130 gens\n";
    cout << "10. R-Pentomino    - Chaotic evolution\n";
    cout << "11. Gosper Gun     - Infinite gliders\n\n";
    cout << "Enter choice: ";
    cin >> pattern_choice;
    
    // Declare arrays ONCE with max size
    char A[MAX_SIZE][MAX_SIZE];
    char B[MAX_SIZE][MAX_SIZE];
    
    // Initialize A to all dead cells
    for(int i = 0; i < MAX_SIZE; i++){
        for(int j = 0; j < MAX_SIZE; j++){
            A[i][j] = x;
        }
    }
    
    // Set pattern-specific parameters and initial state
    switch(pattern_choice) {
        case 1: // GLIDER
            grid_number = 10;
            max_iterations = 40;
            A[0][1] = z; A[1][2] = z; A[2][0] = z;
            A[2][1] = z; A[2][2] = z;
            break;
            
        case 2: // BLINKER
            grid_number = 5;
            max_iterations = 10;
            A[2][1] = z; A[2][2] = z; A[2][3] = z;
            break;
            
        case 3: // TOAD
            grid_number = 6;
            max_iterations = 12;
            A[2][2] = z; A[2][3] = z; A[2][4] = z;
            A[3][1] = z; A[3][2] = z; A[3][3] = z;
            break;
            
        case 4: // BEACON
            grid_number = 6;
            max_iterations = 12;
            A[1][1] = z; A[1][2] = z; A[2][1] = z;
            A[3][4] = z; A[4][3] = z; A[4][4] = z;
            break;
            
        case 5: // PULSAR
            grid_number = 17;
            max_iterations = 30;
            A[2][4]=z; A[2][5]=z; A[2][6]=z; A[2][10]=z; A[2][11]=z; A[2][12]=z;
            A[4][2]=z; A[5][2]=z; A[6][2]=z; A[4][7]=z; A[5][7]=z; A[6][7]=z;
            A[4][9]=z; A[5][9]=z; A[6][9]=z; A[4][14]=z; A[5][14]=z; A[6][14]=z;
            A[7][4]=z; A[7][5]=z; A[7][6]=z; A[7][10]=z; A[7][11]=z; A[7][12]=z;
            A[9][4]=z; A[9][5]=z; A[9][6]=z; A[9][10]=z; A[9][11]=z; A[9][12]=z;
            A[10][2]=z; A[11][2]=z; A[12][2]=z; A[10][7]=z; A[11][7]=z; A[12][7]=z;
            A[10][9]=z; A[11][9]=z; A[12][9]=z; A[10][14]=z; A[11][14]=z; A[12][14]=z;
            A[14][4]=z; A[14][5]=z; A[14][6]=z; A[14][10]=z; A[14][11]=z; A[14][12]=z;
            break;
            
        case 6: // PENTA-DECATHLON
            grid_number = 18;
            max_iterations = 60;
            A[5][4]=z; A[6][4]=z; A[7][4]=z; A[8][4]=z; A[9][4]=z; A[10][4]=z; A[11][4]=z; A[12][4]=z;
            A[5][5]=z; A[7][5]=z; A[8][5]=z; A[9][5]=z; A[10][5]=z; A[12][5]=z;
            A[5][6]=z; A[6][6]=z; A[7][6]=z; A[8][6]=z; A[9][6]=z; A[10][6]=z; A[11][6]=z; A[12][6]=z;
            break;
            
        case 7: // LWSS
            grid_number = 10;
            max_iterations = 40;
            A[2][1]=z; A[2][4]=z; A[3][5]=z; A[4][1]=z; A[4][5]=z;
            A[5][2]=z; A[5][3]=z; A[5][4]=z; A[5][5]=z;
            break;
            
        case 8: // ACORN
            grid_number = 20;
            max_iterations = 300; // Reduced for practicality
            A[2][1]=z; A[3][3]=z; A[4][0]=z; A[4][1]=z; A[4][4]=z; A[4][5]=z; A[4][6]=z;
            break;
            
        case 9: // DIEHARD
            grid_number = 12;
            max_iterations = 130;
            A[3][6]=z; A[4][0]=z; A[4][1]=z; A[5][1]=z; A[5][5]=z; A[5][6]=z; A[5][7]=z;
            break;
            
        case 10: // R-PENTOMINO
            grid_number = 15;
            max_iterations = 200; // Reduced for practicality
            A[5][5]=z; A[5][6]=z; A[6][4]=z; A[6][5]=z; A[7][5]=z;
            break;
            
        case 11: // GOSPER GLIDER GUN
            grid_number = 40;
            max_iterations = 200;
            A[0][24]=z; A[1][22]=z; A[1][24]=z; A[2][12]=z; A[2][13]=z; A[2][20]=z; A[2][21]=z;
            A[2][34]=z; A[2][35]=z; A[3][11]=z; A[3][15]=z; A[3][20]=z; A[3][21]=z; A[3][34]=z;
            A[3][35]=z; A[4][0]=z; A[4][1]=z; A[4][10]=z; A[4][16]=z; A[4][20]=z; A[4][21]=z;
            A[5][0]=z; A[5][1]=z; A[5][10]=z; A[5][14]=z; A[5][16]=z; A[5][17]=z; A[5][22]=z;
            A[5][24]=z; A[6][10]=z; A[6][16]=z; A[6][24]=z; A[7][11]=z; A[7][15]=z;
            A[8][12]=z; A[8][13]=z;
            break;
            
        default:
            cout << "Invalid choice! Using Glider.\n";
            grid_number = 10;
            max_iterations = 40;
            A[0][1]=z; A[1][2]=z; A[2][0]=z; A[2][1]=z; A[2][2]=z;
    }
    
    cout << "\nStarting simulation...\n";
    sleep(2);
    
    // Main game loop
    for(int k = 0; k < max_iterations; k++){
        // Calculate next generation
        for(int q = 0; q < grid_number; q++){
            for(int p = 0; p < grid_number; p++){
                int living_neigh = 0;
                
                // Count living neighbors
                for(int a = -1; a <= 1; a++){
                    for(int b = -1; b <= 1; b++){
                        if(a == 0 && b == 0) continue; // Skip self
                        int newRow = q + a;
                        int newCol = p + b;
                        if(newRow >= 0 && newRow < grid_number && 
                           newCol >= 0 && newCol < grid_number){
                            if(A[newRow][newCol] == z){
                                living_neigh++;
                            }
                        }
                    }
                }
                
                // Apply Game of Life rules
                if(A[q][p] == z){
                    B[q][p] = (living_neigh == 2 || living_neigh == 3) ? z : x;
                } else {
                    B[q][p] = (living_neigh == 3) ? z : x;
                }
            }
        }
        
        // Display and update
        system("clear");
        cout << "Generation: " << k+1 << "/" << max_iterations << "\n\n";
        for(int i = 0; i < grid_number; i++){
            for(int j = 0; j < grid_number; j++){
                A[i][j] = B[i][j];
                cout << B[i][j] << " ";
            }
            cout << "\n";
        }
        
        sleep(1); // 1 second delay
    }
    
    cout << "\nSimulation complete!\n";
    return 0;
}
