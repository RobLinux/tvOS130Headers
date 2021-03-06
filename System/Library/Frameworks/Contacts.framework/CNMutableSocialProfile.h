/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:48:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Contacts/CNSocialProfile.h>

@class NSString, NSArray;

@interface CNMutableSocialProfile : CNSocialProfile

@property (nonatomic,copy) NSString * urlString; 
@property (nonatomic,copy) NSString * username; 
@property (nonatomic,copy) NSString * userIdentifier; 
@property (nonatomic,copy) NSString * service; 
@property (nonatomic,copy) NSString * displayname; 
@property (nonatomic,copy) NSArray * bundleIdentifiers; 
@property (nonatomic,copy) NSString * teamIdentifier; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)freeze;
@end

