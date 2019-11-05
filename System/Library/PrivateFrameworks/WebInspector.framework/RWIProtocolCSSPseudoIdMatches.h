/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSArray;

@interface RWIProtocolCSSPseudoIdMatches : RWIProtocolJSONObject

@property (assign,nonatomic) long long pseudoId; 
@property (nonatomic,copy) NSArray * matches; 
+(id)safe_initWithPseudoId:(long long)arg1 matches:(id)arg2 ;
-(NSArray *)matches;
-(void)setMatches:(NSArray *)arg1 ;
-(void)setPseudoId:(long long)arg1 ;
-(id)initWithPseudoId:(long long)arg1 matches:(id)arg2 ;
-(long long)pseudoId;
@end

