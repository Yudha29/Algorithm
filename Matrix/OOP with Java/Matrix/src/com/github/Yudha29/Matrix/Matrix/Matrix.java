/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package com.github.Yudha29.Matrix.Matrix;

import java.util.Scanner;
/**
 *
 * @author 62853
 */
public class Matrix {
    public int a[][] = {};
    public Matrix(int row, int column) {
        this.a = new int[row][column];
    }
    
    public void fillMatrix() {
       System.out.println("Input Array : \n");
       Scanner scan = new Scanner(System.in);
       for(int i=0; i < this.a.length; i++) {
           for (int j=0; j < this.a[i].length; j++) {
               System.out.print("Input Data Ke [" + i + "][" + j + "] : ");
               this.a[i][j] = scan.nextInt();
           }
           
           System.out.println();
       }
    }
    
    public void printMatrix() {
        for(int i=0; i < this.a.length; i++) {
           for (int j=0; j < this.a[i].length; j++) {
               System.out.print(this.a[i][j] + "\t");
           }
           
           System.out.println();
       }
    }
    
    public static void print(int array[][]) {
        for(int i=0; i < array.length; i++) {
           for (int j=0; j < array[i].length; j++) {
               System.out.print(array[i][j] + "\t");
           }
           
           System.out.println();
       }
    }
    
    public int[][] multiply(int array[][]) {
        int result[][] = new int[this.a.length][array[0].length];
        
        for (int i=0; i< this.a.length; i++) {
//            System.out.println("i : " + i);
            for(int j=0; j < array[0].length; j++) {
//                System.out.println("j : " + j);
                int temp = 0;
                for (int k=0; k < array.length; k++) {
//                    System.out.println("a : " + this.a[i][k]);
//                    System.out.println(this.a[i][k] + " * " + array[k][j]);
                    temp += this.a[i][k] * array[k][j];
                }
//                System.out.print(temp);
                result[i][j] = temp;
            }
        }
        
        return result;
    }
    
    public static int[][] add(int matrix1[][], int matrix2[][]) {
        int result[][] = new int[matrix1.length][matrix1[0].length];
        for (int i=0; i < matrix1.length; i++) {
            for(int j=0; j<matrix1[i].length; j++) {
                result[i][j] = matrix1[i][j] + matrix2[i][j];
            }
        }
        
        return result;
    }
}
