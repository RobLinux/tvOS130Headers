/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, SASource;

@interface SAABContactGroup : SADomainObject

@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,retain) SASource * groupSource; 
+(id)contactGroup;
+(id)contactGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(id)encodedClassName;
-(SASource *)groupSource;
-(void)setGroupSource:(SASource *)arg1 ;
@end

