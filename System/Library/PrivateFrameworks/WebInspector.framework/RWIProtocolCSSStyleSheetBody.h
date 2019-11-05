/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class IKCSSRuleList, NSIndexSet, NSString, NSArray;

@interface RWIProtocolCSSStyleSheetBody : RWIProtocolJSONObject

@property (setter=ik_setRuleList:,nonatomic,retain) IKCSSRuleList * ik_ruleList; 
@property (setter=ik_setTextNewLineIndexSet:,nonatomic,retain) NSIndexSet * ik_textNewLineIndexSet; 
@property (nonatomic,copy) NSString * styleSheetId; 
@property (nonatomic,copy) NSArray * rules; 
@property (nonatomic,copy) NSString * text; 
+(id)safe_initWithStyleSheetId:(id)arg1 rules:(id)arg2 ;
+(id)ik_stylesheetBodyFromRuleList:(id)arg1 forStyleMarkup:(id)arg2 withHeader:(id)arg3 ;
-(void)ik_setTextNewLineIndexSet:(id)arg1 ;
-(void)ik_setRuleList:(id)arg1 ;
-(IKCSSRuleList *)ik_ruleList;
-(NSIndexSet *)ik_textNewLineIndexSet;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSArray *)rules;
-(void)setRules:(NSArray *)arg1 ;
-(void)setStyleSheetId:(NSString *)arg1 ;
-(NSString *)styleSheetId;
-(id)initWithStyleSheetId:(id)arg1 rules:(id)arg2 ;
@end

