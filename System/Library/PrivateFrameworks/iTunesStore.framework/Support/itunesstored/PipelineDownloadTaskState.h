/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:20 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/NSCopying.h>

@class NSString, SSOperationProgress, DownloadHandle;

@interface PipelineDownloadTaskState : NSObject <NSCopying> {

	long long _automaticType;
	long long _downloadIdentifier;
	NSString* _bundleIdentifier;
	NSString* _kind;
	BOOL _legacyClient;
	long long _mediaAssetIdentifier;
	SSOperationProgress* _overallProgress;
	BOOL _requiresDownloadHandler;
	long long _storeItemIdentifier;
	long long _transferBytesExpected;
	long long _transferBytesWritten;
	double _transferProgressFraction;
	BOOL legacyClient;
	DownloadHandle* _downloadHandle;
	unsigned long long _transferResumptionOffset;

}

@property (nonatomic,retain) DownloadHandle * downloadHandle;                          //@synthesize downloadHandle=_downloadHandle - In the implementation block
@property (assign,nonatomic) long long downloadIdentifier;                             //@synthesize downloadIdentifier=_downloadIdentifier - In the implementation block
@property (assign,nonatomic) long long mediaAssetIdentifier;                           //@synthesize mediaAssetIdentifier=_mediaAssetIdentifier - In the implementation block
@property (assign,nonatomic) long long automaticType;                                  //@synthesize automaticType=_automaticType - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,retain) NSString * kind;                                          //@synthesize kind=_kind - In the implementation block
@property (assign,getter=isLegacyClient,nonatomic) BOOL legacyClient; 
@property (assign,nonatomic) BOOL requiresDownloadHandler;                             //@synthesize requiresDownloadHandler=_requiresDownloadHandler - In the implementation block
@property (assign,nonatomic) long long transferBytesExpected;                          //@synthesize transferBytesExpected=_transferBytesExpected - In the implementation block
@property (assign,nonatomic) long long transferBytesWritten;                           //@synthesize transferBytesWritten=_transferBytesWritten - In the implementation block
@property (assign,nonatomic) double transferProgressFraction;                          //@synthesize transferProgressFraction=_transferProgressFraction - In the implementation block
@property (assign,nonatomic) unsigned long long transferResumptionOffset;              //@synthesize transferResumptionOffset=_transferResumptionOffset - In the implementation block
@property (nonatomic,readonly) SSOperationProgress * overallProgress; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)bundleIdentifier;
-(NSString *)kind;
-(void)setKind:(NSString *)arg1 ;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(long long)downloadIdentifier;
-(void)setDownloadIdentifier:(long long)arg1 ;
-(long long)transferBytesWritten;
-(long long)transferBytesExpected;
-(BOOL)isLegacyClient;
-(double)transferProgressFraction;
-(void)setTransferBytesWritten:(long long)arg1 ;
-(void)setTransferBytesExpected:(long long)arg1 ;
-(void)setTransferProgress:(double)arg1 ;
-(long long)automaticType;
-(void)setAutomaticType:(long long)arg1 ;
-(void)setMediaAssetIdentifier:(long long)arg1 ;
-(long long)mediaAssetIdentifier;
-(void)setTransferProgressFraction:(double)arg1 ;
-(id)_overallProgress;
-(SSOperationProgress *)overallProgress;
-(BOOL)requiresDownloadHandler;
-(void)setRequiresDownloadHandler:(BOOL)arg1 ;
-(id)initWithPrepareDownloadResponse:(id)arg1 ;
-(void)setFinishProgress:(double)arg1 ;
-(void)setTransferProgressWithBytesWritten:(long long)arg1 totalBytesExpected:(long long)arg2 ;
-(unsigned long long)transferResumptionOffset;
-(void)setTransferResumptionOffset:(unsigned long long)arg1 ;
-(DownloadHandle *)downloadHandle;
-(void)setDownloadHandle:(DownloadHandle *)arg1 ;
-(void)setLegacyClient:(BOOL)arg1 ;
@end

