/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolGenericTypesSearchMatch : RWIProtocolJSONObject

@property (assign,nonatomic) double lineNumber; 
@property (nonatomic,copy) NSString * lineContent; 
-(double)lineNumber;
-(void)setLineNumber:(double)arg1 ;
-(void)setLineContent:(NSString *)arg1 ;
-(id)initWithLineNumber:(double)arg1 lineContent:(id)arg2 ;
-(NSString *)lineContent;
@end

