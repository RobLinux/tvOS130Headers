/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:43 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/Transparency.framework/Transparency
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Transparency/GPBMessage.h>

@class NSString, GPBStruct, GPBListValue;

@interface GPBValue : GPBMessage

@property (nonatomic,readonly) int kindOneOfCase; 
@property (assign,nonatomic) int nullValue; 
@property (assign,nonatomic) double numberValue; 
@property (nonatomic,copy) NSString * stringValue; 
@property (assign,nonatomic) BOOL boolValue; 
@property (nonatomic,retain) GPBStruct * structValue; 
@property (nonatomic,retain) GPBListValue * listValue; 
+(id)descriptor;
@end
