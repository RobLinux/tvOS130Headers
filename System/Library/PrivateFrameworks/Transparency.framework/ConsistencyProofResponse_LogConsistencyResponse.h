/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>

@class SignedLogHead, NSMutableArray;

@interface ConsistencyProofResponse_LogConsistencyResponse : GPBMessage

@property (assign,nonatomic) int logType; 
@property (assign,nonatomic) int application; 
@property (nonatomic,retain) SignedLogHead * startSlh; 
@property (assign,nonatomic) BOOL hasStartSlh; 
@property (nonatomic,retain) SignedLogHead * endSlh; 
@property (assign,nonatomic) BOOL hasEndSlh; 
@property (nonatomic,retain) NSMutableArray * proofHashesArray; 
@property (nonatomic,readonly) unsigned long long proofHashesArray_Count; 
+(id)descriptor;
@end

