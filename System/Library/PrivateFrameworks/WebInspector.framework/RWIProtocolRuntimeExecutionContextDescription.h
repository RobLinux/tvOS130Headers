/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:00 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebInspector/RWIProtocolJSONObject.h>

@class NSString;

@interface RWIProtocolRuntimeExecutionContextDescription : RWIProtocolJSONObject

@property (assign,nonatomic) int identifier; 
@property (assign,nonatomic) BOOL isPageContext; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * frameId; 
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(int)identifier;
-(void)setIdentifier:(int)arg1 ;
-(void)setFrameId:(NSString *)arg1 ;
-(NSString *)frameId;
-(void)setIsPageContext:(BOOL)arg1 ;
-(id)initWithIdentifier:(int)arg1 isPageContext:(BOOL)arg2 name:(id)arg3 frameId:(id)arg4 ;
-(BOOL)isPageContext;
@end

