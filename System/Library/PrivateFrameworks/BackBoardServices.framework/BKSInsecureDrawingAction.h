/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BaseBoard/BSAction.h>

@class NSDictionary, NSArray;

@interface BKSInsecureDrawingAction : BSAction

@property (nonatomic,readonly) NSDictionary * pidToContextInfoDictionary; 
@property (nonatomic,readonly) NSArray * processIds; 
@property (nonatomic,readonly) NSArray * secureModeViolations; 
-(id)initWithInfo:(id)arg1 timeout:(double)arg2 forResponseOnQueue:(id)arg3 withHandler:(/*^block*/id)arg4 ;
-(id)keyDescriptionForSetting:(unsigned long long)arg1 ;
-(id)initWithPidToContextIdsDictionary:(id)arg1 ;
-(id)initWithSecureModeViolations:(id)arg1 ;
-(id)_initWithPidToContextInfoDictionary:(NSDictionary*)arg1 ;
-(NSArray *)secureModeViolations;
-(NSDictionary *)pidToContextInfoDictionary;
-(NSArray *)processIds;
@end

