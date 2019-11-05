/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString, NSNumber;

@interface SAUIConfirmationOption : AceObject <SAAceSerializable>

@property (assign,nonatomic) BOOL active; 
@property (nonatomic,copy) NSArray * commands; 
@property (nonatomic,copy) NSString * iconLabel; 
@property (nonatomic,copy) NSString * iconType; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * speechDuration; 
@property (nonatomic,copy) NSString * type; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)confirmationOption;
+(id)confirmationOptionWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id)groupIdentifier;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(BOOL)active;
-(NSString *)iconType;
-(void)setIconType:(NSString *)arg1 ;
-(NSArray *)commands;
-(void)setCommands:(NSArray *)arg1 ;
-(id)encodedClassName;
-(NSString *)iconLabel;
-(void)setIconLabel:(NSString *)arg1 ;
-(NSNumber *)speechDuration;
-(void)setSpeechDuration:(NSNumber *)arg1 ;
@end

