/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:34 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber, EDAMShareRelationshipRestrictions;

@interface EDAMMemberShareRelationship : FATObject {

	NSString* _displayName;
	NSNumber* _recipientUserId;
	NSNumber* _bestPrivilege;
	NSNumber* _individualPrivilege;
	EDAMShareRelationshipRestrictions* _restrictions;
	NSNumber* _sharerUserId;

}

@property (nonatomic,retain) NSString * displayName;                                        //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSNumber * recipientUserId;                                    //@synthesize recipientUserId=_recipientUserId - In the implementation block
@property (nonatomic,retain) NSNumber * bestPrivilege;                                      //@synthesize bestPrivilege=_bestPrivilege - In the implementation block
@property (nonatomic,retain) NSNumber * individualPrivilege;                                //@synthesize individualPrivilege=_individualPrivilege - In the implementation block
@property (nonatomic,retain) EDAMShareRelationshipRestrictions * restrictions;              //@synthesize restrictions=_restrictions - In the implementation block
@property (nonatomic,retain) NSNumber * sharerUserId;                                       //@synthesize sharerUserId=_sharerUserId - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)displayName;
-(EDAMShareRelationshipRestrictions *)restrictions;
-(void)setRestrictions:(EDAMShareRelationshipRestrictions *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSNumber *)sharerUserId;
-(void)setSharerUserId:(NSNumber *)arg1 ;
-(NSNumber *)recipientUserId;
-(void)setRecipientUserId:(NSNumber *)arg1 ;
-(NSNumber *)bestPrivilege;
-(void)setBestPrivilege:(NSNumber *)arg1 ;
-(NSNumber *)individualPrivilege;
-(void)setIndividualPrivilege:(NSNumber *)arg1 ;
@end

