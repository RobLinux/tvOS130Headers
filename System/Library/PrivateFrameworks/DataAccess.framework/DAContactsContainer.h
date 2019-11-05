/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAContainer.h>

@class CNMutableContainer, NSString;

@interface DAContactsContainer : NSObject <DAContainer> {

	BOOL _markedForDeletion;
	BOOL _markedAsDefault;
	CNMutableContainer* _mutableContainer;

}

@property (nonatomic,readonly) CNMutableContainer * mutableContainer;                          //@synthesize mutableContainer=_mutableContainer - In the implementation block
@property (assign,nonatomic) BOOL markedForDeletion;                                           //@synthesize markedForDeletion=_markedForDeletion - In the implementation block
@property (assign,nonatomic) BOOL markedAsDefault;                                             //@synthesize markedAsDefault=_markedAsDefault - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isGuardianRestricted,nonatomic) BOOL guardianRestricted; 
@property (assign,getter=isGuardianStateDirty,nonatomic) BOOL guardianStateDirty; 
-(id)name;
-(long long)type;
-(void)setType:(long long)arg1 ;
-(void)setName:(id)arg1 ;
-(id)identifier;
-(BOOL)isLocal;
-(void)setAccountIdentifier:(id)arg1 ;
-(id)accountIdentifier;
-(id)externalIdentifier;
-(void)setExternalIdentifier:(id)arg1 ;
-(id)constraintsPath;
-(void)setConstraintsPath:(id)arg1 ;
-(BOOL)isGuardianRestricted;
-(void)setGuardianRestricted:(BOOL)arg1 ;
-(BOOL)isGuardianStateDirty;
-(void)setGuardianStateDirty:(BOOL)arg1 ;
-(BOOL)isContainer;
-(BOOL)isGroup;
-(BOOL)isContact;
-(id)meContactIdentifier;
-(void)markForDeletion;
-(void)updateSaveRequest:(id)arg1 ;
-(BOOL)isAccount;
-(id)cTag;
-(void)setCTag:(id)arg1 ;
-(id)syncTag;
-(void)setSyncTag:(id)arg1 ;
-(id)syncData;
-(void)setSyncData:(id)arg1 ;
-(void)setMeContactIdentifier:(id)arg1 ;
-(BOOL)isContentReadonly;
-(void)setContentReadonly:(BOOL)arg1 ;
-(BOOL)arePropertiesReadonly;
-(void)setArePropertiesReadonly:(BOOL)arg1 ;
-(BOOL)isSearchContainer;
-(void)markAsDefault;
-(void*)asSource;
-(id)asContainer;
-(BOOL)markedForDeletion;
-(void)setMarkedForDeletion:(BOOL)arg1 ;
-(id)initWithCNContainer:(id)arg1 ;
-(CNMutableContainer *)mutableContainer;
-(void)setMarkedAsDefault:(BOOL)arg1 ;
-(BOOL)markedAsDefault;
@end

