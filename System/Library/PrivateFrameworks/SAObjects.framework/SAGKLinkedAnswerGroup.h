/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSNumber, NSString;

@interface SAGKLinkedAnswerGroup : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * linkedAnswers; 
@property (nonatomic,copy) NSNumber * numberOfResults; 
@property (nonatomic,copy) NSString * title; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)linkedAnswerGroup;
+(id)linkedAnswerGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(NSNumber *)numberOfResults;
-(void)setNumberOfResults:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSArray *)linkedAnswers;
-(void)setLinkedAnswers:(NSArray *)arg1 ;
@end

