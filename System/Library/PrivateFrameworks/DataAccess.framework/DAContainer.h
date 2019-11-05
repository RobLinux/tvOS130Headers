/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:40:27 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DAContainer <DACardDAVRecord>
@property (assign,getter=isGuardianRestricted,nonatomic) BOOL guardianRestricted; 
@property (assign,getter=isGuardianStateDirty,nonatomic) BOOL guardianStateDirty; 
@required
-(id)name;
-(long long)type;
-(void)setType:(long long)arg1;
-(void)setName:(id)arg1;
-(id)identifier;
-(BOOL)isLocal;
-(void)setAccountIdentifier:(id)arg1;
-(id)accountIdentifier;
-(id)externalIdentifier;
-(void)setExternalIdentifier:(id)arg1;
-(id)constraintsPath;
-(void)setConstraintsPath:(id)arg1;
-(BOOL)isGuardianRestricted;
-(void)setGuardianRestricted:(BOOL)arg1;
-(BOOL)isGuardianStateDirty;
-(void)setGuardianStateDirty:(BOOL)arg1;
-(id)meContactIdentifier;
-(id)cTag;
-(void)setCTag:(id)arg1;
-(id)syncTag;
-(void)setSyncTag:(id)arg1;
-(id)syncData;
-(void)setSyncData:(id)arg1;
-(void)setMeContactIdentifier:(id)arg1;
-(BOOL)isContentReadonly;
-(void)setContentReadonly:(BOOL)arg1;
-(BOOL)arePropertiesReadonly;
-(void)setArePropertiesReadonly:(BOOL)arg1;
-(BOOL)isSearchContainer;
-(void)markAsDefault;
-(void*)asSource;
-(id)asContainer;

@end

