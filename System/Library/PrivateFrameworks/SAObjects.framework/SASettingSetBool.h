/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:30 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingSetValue.h>

@interface SASettingSetBool : SASettingSetValue

@property (assign,nonatomic) BOOL toggle; 
@property (assign,nonatomic) BOOL value; 
+(id)setBool;
+(id)setBoolWithDictionary:(id)arg1 context:(id)arg2 ;
-(BOOL)value;
-(void)setValue:(BOOL)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(BOOL)toggle;
-(void)setToggle:(BOOL)arg1 ;
@end

