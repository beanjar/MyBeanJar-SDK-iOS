//
//  Version 2.0 - Released 10/30/2013
//
//  BeanJarManager.h 
//
// (c) COPYRIGHT 2013 BeanJar Inc. ALL RIGHTS RESERVED.
// 
// THE SOURCE CODE CONTAINED IN THIS FILE IS THE PROPERTY OF AND 
// CONSTITUTES TRADE SECRETS OF BeanJar Inc. ("BeanJar Inc").
// THE HOLDER OF THIS FILE MUST KEEP THIS FILE AND ALL ITS CONTENTS
// STRICTLY CONFIDENTIAL AND IS GRANTED NO RIGHTS TO USE THE SOURCE CODE 
// EXCEPT TO THE EXTENT EXPRESSLY AUTHORIZED BY BeanJar Inc. IF YOU ARE NOT 
// AUTHORIZED TO POSSESS THIS SOURCE CODE, YOU MUST RETURN IT TO BeanJar Inc 
// IMMEDIATELY UPON RECEIPT OR, IF YOU HOLD IT IN A FORM THAT CANNOT BE 
// RETURNED, YOU MUST DESTROY IT. IF YOU FAIL TO DO SO PROMPTLY, YOU MAY 
// FACE LEGAL ACTION FOR THEFT AND MISAPPROPRIATION OF TRADE SECRETS.
//

#import <Foundation/Foundation.h>
#import "MBJRequest.h"
#import "MBJApp.h"
#import "MBJWinner.h"
#import "MBJSponsor.h"
#import "MBJBean.h"
#import "MBJCategory.h"
#import "MBJAward.h"
#import "MBJSponsorLocation.h"

@interface BeanJarManager : NSObject

/**
 *  Determine if the MyBeanJarApp is installed on the device
 *
 *  @return YES or NO
 */
+ (BOOL)isMyBeanJarAppInstalled;

/**
 *  Launch the MyBeanJarApp on the device
 *
 *  @return YES == success, or NO
 */
+ (BOOL)launchMyBeanJarApp;

/**
 *  Go to the MyBeanJar App in the App Store
 *
 *  @return YES == success, or NO
 */
+ (BOOL)launchAppStore;

@end
