/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:21 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/NSCopying.h>

@class NSData, NSString, NSNumber, NSDictionary;

@interface SoftwareProperties : NSObject <NSCopying> {

	NSData* _appReceiptData;
	NSData* _artworkData;
	NSString* _bundleIdentifier;
	NSString* _bundleVersion;
	NSNumber* _installType;
	BOOL _isFromStore;
	NSDictionary* _iTunesMetadata;
	NSData* _newsstandArtworkData;
	NSString* _packagePath;
	NSData* _sinfData;
	NSData* _transitMapData;
	long long _downloadIdentifier;
	NSString* _scratchDirectory;

}

@property (nonatomic,copy) NSData * appReceiptData;                     //@synthesize appReceiptData=_appReceiptData - In the implementation block
@property (nonatomic,copy) NSData * artworkData;                        //@synthesize artworkData=_artworkData - In the implementation block
@property (nonatomic,copy) NSString * bundleIdentifier;                 //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy) NSString * bundleVersion;                    //@synthesize bundleVersion=_bundleVersion - In the implementation block
@property (assign,nonatomic) long long downloadIdentifier;              //@synthesize downloadIdentifier=_downloadIdentifier - In the implementation block
@property (nonatomic,copy) NSNumber * installType;                      //@synthesize installType=_installType - In the implementation block
@property (nonatomic,copy) NSDictionary * ITunesMetadata;               //@synthesize iTunesMetadata=_iTunesMetadata - In the implementation block
@property (assign,nonatomic) BOOL isFromStore;                          //@synthesize isFromStore=_isFromStore - In the implementation block
@property (nonatomic,copy) NSData * newsstandArtworkData;               //@synthesize newsstandArtworkData=_newsstandArtworkData - In the implementation block
@property (nonatomic,copy) NSString * packagePath;                      //@synthesize packagePath=_packagePath - In the implementation block
@property (nonatomic,copy) NSString * scratchDirectory;                 //@synthesize scratchDirectory=_scratchDirectory - In the implementation block
@property (nonatomic,copy) NSData * sinfData;                           //@synthesize sinfData=_sinfData - In the implementation block
@property (nonatomic,copy) NSData * transitMapData;                     //@synthesize transitMapData=_transitMapData - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(NSNumber *)installType;
-(NSString *)bundleVersion;
-(long long)downloadIdentifier;
-(void)setDownloadIdentifier:(long long)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(NSString *)packagePath;
-(void)setPackagePath:(NSString *)arg1 ;
-(NSData *)appReceiptData;
-(void)setInstallType:(NSNumber *)arg1 ;
-(void)setArtworkData:(NSData *)arg1 ;
-(NSData *)artworkData;
-(NSData *)sinfData;
-(void)setITunesMetadata:(NSDictionary *)arg1 ;
-(void)setSinfData:(NSData *)arg1 ;
-(void)setAppReceiptData:(NSData *)arg1 ;
-(BOOL)isFromStore;
-(void)setIsFromStore:(BOOL)arg1 ;
-(NSData *)newsstandArtworkData;
-(NSData *)transitMapData;
-(NSDictionary *)ITunesMetadata;
-(void)setNewsstandArtworkData:(NSData *)arg1 ;
-(void)setTransitMapData:(NSData *)arg1 ;
-(NSString *)scratchDirectory;
-(void)setScratchDirectory:(NSString *)arg1 ;
@end

