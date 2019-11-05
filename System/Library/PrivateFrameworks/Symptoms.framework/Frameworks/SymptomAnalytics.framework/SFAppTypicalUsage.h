/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:12 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomAnalytics.framework/SymptomAnalytics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSDate, NSNumber, SFApp;

@interface SFAppTypicalUsage : NSManagedObject

@property (nonatomic,copy) NSDate * firstTimeStamp; 
@property (nonatomic,copy) NSNumber * intervalType; 
@property (nonatomic,copy) NSDate * timeStamp; 
@property (nonatomic,copy) NSNumber * wifiIN; 
@property (nonatomic,copy) NSNumber * wifiIN_M2; 
@property (nonatomic,copy) NSNumber * wifiIN_mean; 
@property (nonatomic,copy) NSNumber * wifiIN_var; 
@property (nonatomic,copy) NSNumber * wifiOUT; 
@property (nonatomic,copy) NSNumber * wifiOUT_M2; 
@property (nonatomic,copy) NSNumber * wifiOUT_mean; 
@property (nonatomic,copy) NSNumber * wifiOUT_var; 
@property (nonatomic,copy) NSNumber * wifiSampleCount; 
@property (nonatomic,copy) NSNumber * wiredIN; 
@property (nonatomic,copy) NSNumber * wiredIN_M2; 
@property (nonatomic,copy) NSNumber * wiredIN_mean; 
@property (nonatomic,copy) NSNumber * wiredIN_var; 
@property (nonatomic,copy) NSNumber * wiredOUT; 
@property (nonatomic,copy) NSNumber * wiredOUT_M2; 
@property (nonatomic,copy) NSNumber * wiredOUT_mean; 
@property (nonatomic,copy) NSNumber * wiredOUT_var; 
@property (nonatomic,copy) NSNumber * wiredSampleCount; 
@property (nonatomic,copy) NSNumber * wwanIN; 
@property (nonatomic,copy) NSNumber * wwanIN_M2; 
@property (nonatomic,copy) NSNumber * wwanIN_mean; 
@property (nonatomic,copy) NSNumber * wwanIN_var; 
@property (nonatomic,copy) NSNumber * wwanOUT; 
@property (nonatomic,copy) NSNumber * wwanOUT_M2; 
@property (nonatomic,copy) NSNumber * wwanOUT_mean; 
@property (nonatomic,copy) NSNumber * wwanOUT_var; 
@property (nonatomic,copy) NSNumber * wwanSampleCount; 
@property (nonatomic,retain) SFApp * hasApp; 
+(id)entityName;
+(id)fetchRequest;
@end

