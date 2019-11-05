/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:45 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileInstallation/MobileInstallation-Structs.h>
#import <MobileInstallation/NSSecureCoding.h>
#import <MobileInstallation/NSCopying.h>

@class MIStoreMetadata, NSData, NSArray, NSDictionary;

@interface MIInstallOptions : NSObject <NSSecureCoding, NSCopying> {

	BOOL _developerInstall;
	BOOL _systemAppInstall;
	BOOL _userInitiated;
	BOOL _waitForDeletion;
	BOOL _skipWatchAppInstall;
	BOOL _skipBlacklist;
	BOOL _installForMigrator;
	BOOL _allowLocalProvisioned;
	BOOL _performAPFSClone;
	unsigned long long _installTargetType;
	unsigned long long _lsInstallType;
	MIStoreMetadata* _iTunesMetadata;
	NSData* _sinfData;
	NSData* _iTunesArtworkData;
	NSData* _geoJSONData;
	NSArray* _provisioningProfiles;
	unsigned long long _autoInstallOverride;

}

@property (assign,nonatomic) unsigned long long installTargetType;                         //@synthesize installTargetType=_installTargetType - In the implementation block
@property (assign,getter=isDeveloperInstall,nonatomic) BOOL developerInstall;              //@synthesize developerInstall=_developerInstall - In the implementation block
@property (assign,getter=isSystemAppInstall,nonatomic) BOOL systemAppInstall;              //@synthesize systemAppInstall=_systemAppInstall - In the implementation block
@property (assign,getter=isUserInitiated,nonatomic) BOOL userInitiated;                    //@synthesize userInitiated=_userInitiated - In the implementation block
@property (assign,nonatomic) BOOL waitForDeletion;                                         //@synthesize waitForDeletion=_waitForDeletion - In the implementation block
@property (assign,nonatomic) unsigned long long lsInstallType;                             //@synthesize lsInstallType=_lsInstallType - In the implementation block
@property (nonatomic,copy) MIStoreMetadata * iTunesMetadata;                               //@synthesize iTunesMetadata=_iTunesMetadata - In the implementation block
@property (nonatomic,copy) NSData * sinfData;                                              //@synthesize sinfData=_sinfData - In the implementation block
@property (nonatomic,copy) NSData * iTunesArtworkData;                                     //@synthesize iTunesArtworkData=_iTunesArtworkData - In the implementation block
@property (nonatomic,copy) NSData * geoJSONData;                                           //@synthesize geoJSONData=_geoJSONData - In the implementation block
@property (nonatomic,copy) NSArray * provisioningProfiles;                                 //@synthesize provisioningProfiles=_provisioningProfiles - In the implementation block
@property (assign,nonatomic) BOOL skipWatchAppInstall;                                     //@synthesize skipWatchAppInstall=_skipWatchAppInstall - In the implementation block
@property (assign,nonatomic) BOOL skipBlacklist;                                           //@synthesize skipBlacklist=_skipBlacklist - In the implementation block
@property (assign,nonatomic) BOOL installForMigrator;                                      //@synthesize installForMigrator=_installForMigrator - In the implementation block
@property (assign,nonatomic) BOOL allowLocalProvisioned;                                   //@synthesize allowLocalProvisioned=_allowLocalProvisioned - In the implementation block
@property (assign,nonatomic) BOOL performAPFSClone;                                        //@synthesize performAPFSClone=_performAPFSClone - In the implementation block
@property (assign,nonatomic) unsigned long long autoInstallOverride;                       //@synthesize autoInstallOverride=_autoInstallOverride - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * legacyOptionsDictionary; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isDeveloperInstall;
-(BOOL)isUserInitiated;
-(void)setUserInitiated:(BOOL)arg1 ;
-(NSData *)sinfData;
-(unsigned long long)installTargetType;
-(BOOL)isSystemAppInstall;
-(BOOL)waitForDeletion;
-(unsigned long long)lsInstallType;
-(MIStoreMetadata *)iTunesMetadata;
-(NSData *)iTunesArtworkData;
-(NSData *)geoJSONData;
-(NSArray *)provisioningProfiles;
-(BOOL)skipWatchAppInstall;
-(BOOL)skipBlacklist;
-(BOOL)installForMigrator;
-(BOOL)allowLocalProvisioned;
-(BOOL)performAPFSClone;
-(unsigned long long)autoInstallOverride;
-(void)setInstallTargetType:(unsigned long long)arg1 ;
-(void)setDeveloperInstall:(BOOL)arg1 ;
-(void)setSystemAppInstall:(BOOL)arg1 ;
-(void)setWaitForDeletion:(BOOL)arg1 ;
-(void)setLsInstallType:(unsigned long long)arg1 ;
-(void)setITunesMetadata:(MIStoreMetadata *)arg1 ;
-(void)setSinfData:(NSData *)arg1 ;
-(void)setITunesArtworkData:(NSData *)arg1 ;
-(void)setGeoJSONData:(NSData *)arg1 ;
-(void)setProvisioningProfiles:(NSArray *)arg1 ;
-(void)setSkipWatchAppInstall:(BOOL)arg1 ;
-(void)setAutoInstallOverride:(unsigned long long)arg1 ;
-(void)setSkipBlacklist:(BOOL)arg1 ;
-(void)setInstallForMigrator:(BOOL)arg1 ;
-(void)setAllowLocalProvisioned:(BOOL)arg1 ;
-(void)setPerformAPFSClone:(BOOL)arg1 ;
-(NSDictionary *)legacyOptionsDictionary;
-(id)initWithLegacyOptionsDictionary:(id)arg1 ;
@end

