/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Security.framework/XPCServices/TrustedPeersHelper.xpc/TrustedPeersHelper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NSSet, NSData;

@interface ContainerMO : NSManagedObject

@property (copy,nonatomic) NSString * accountDSID; 
@property (retain,nonatomic) NSSet * allowedMachineIDs; 
@property (copy,nonatomic) NSString * changeToken; 
@property (copy,nonatomic) NSString * egoPeerID; 
@property (copy,nonatomic) NSData * egoPeerPermanentInfo; 
@property (copy,nonatomic) NSData * egoPeerPermanentInfoSig; 
@property (copy,nonatomic) NSData * egoPeerStableInfo; 
@property (copy,nonatomic) NSData * egoPeerStableInfoSig; 
@property (assign,nonatomic) BOOL moreChanges; 
@property (copy,nonatomic) NSString * name; 
@property (retain,nonatomic) NSSet * bottles; 
@property (retain,nonatomic) NSSet * machines; 
@property (retain,nonatomic) NSSet * peers; 
@property (retain,nonatomic) NSSet * policies; 
-(id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2 ;
@end

