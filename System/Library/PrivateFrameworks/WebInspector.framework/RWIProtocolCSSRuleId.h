/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolCSSRuleId : RWIProtocolJSONObject

@property (nonatomic,copy) NSString * styleSheetId; 
@property (assign,nonatomic) int ordinal; 
+(id)safe_initWithStyleSheetId:(id)arg1 ordinal:(int)arg2 ;
-(int)ordinal;
-(void)setOrdinal:(int)arg1 ;
-(void)setStyleSheetId:(NSString *)arg1 ;
-(id)initWithStyleSheetId:(id)arg1 ordinal:(int)arg2 ;
-(NSString *)styleSheetId;
@end
