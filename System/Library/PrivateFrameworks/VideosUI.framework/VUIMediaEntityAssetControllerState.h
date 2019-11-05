/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:47 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/NSCopying.h>

@interface VUIMediaEntityAssetControllerState : NSObject <NSCopying> {

	BOOL _supportsCancellation;
	BOOL _supportsPausing;
	unsigned long long _status;
	double _downloadProgress;
	unsigned long long _bytesToDownload;
	unsigned long long _bytesDownloaded;

}

@property (assign,nonatomic) unsigned long long status;                                          //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) double downloadProgress;                                            //@synthesize downloadProgress=_downloadProgress - In the implementation block
@property (assign,nonatomic) BOOL supportsCancellation;                                          //@synthesize supportsCancellation=_supportsCancellation - In the implementation block
@property (assign,nonatomic) BOOL supportsPausing;                                               //@synthesize supportsPausing=_supportsPausing - In the implementation block
@property (assign,nonatomic) unsigned long long bytesToDownload;                                 //@synthesize bytesToDownload=_bytesToDownload - In the implementation block
@property (assign,nonatomic) unsigned long long bytesDownloaded;                                 //@synthesize bytesDownloaded=_bytesDownloaded - In the implementation block
@property (getter=isDownloadInProgress,nonatomic,readonly) BOOL downloadInProgress; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)init;
-(unsigned long long)bytesDownloaded;
-(unsigned long long)status;
-(void)setStatus:(unsigned long long)arg1 ;
-(void)setBytesDownloaded:(unsigned long long)arg1 ;
-(void)setDownloadProgress:(double)arg1 ;
-(double)downloadProgress;
-(unsigned long long)bytesToDownload;
-(BOOL)supportsCancellation;
-(BOOL)supportsPausing;
-(BOOL)isDownloadInProgress;
-(void)setSupportsCancellation:(BOOL)arg1 ;
-(void)setSupportsPausing:(BOOL)arg1 ;
-(void)setBytesToDownload:(unsigned long long)arg1 ;
@end

