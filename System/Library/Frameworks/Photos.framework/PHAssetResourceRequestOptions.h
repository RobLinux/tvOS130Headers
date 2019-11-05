/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:39 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Photos/Photos-Structs.h>
#import <Photos/NSCopying.h>

@interface PHAssetResourceRequestOptions : NSObject <NSCopying> {

	BOOL _networkAccessAllowed;
	BOOL _resistentToPrune;
	BOOL _downloadIsTransient;
	/*^block*/id _progressHandler;

}

@property (assign,nonatomic) BOOL resistentToPrune;                                                //@synthesize resistentToPrune=_resistentToPrune - In the implementation block
@property (assign,nonatomic) BOOL downloadIsTransient;                                             //@synthesize downloadIsTransient=_downloadIsTransient - In the implementation block
@property (assign,getter=isNetworkAccessAllowed,nonatomic) BOOL networkAccessAllowed;              //@synthesize networkAccessAllowed=_networkAccessAllowed - In the implementation block
@property (nonatomic,copy) id progressHandler;                                                     //@synthesize progressHandler=_progressHandler - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(BOOL)isNetworkAccessAllowed;
-(void)setNetworkAccessAllowed:(BOOL)arg1 ;
-(BOOL)resistentToPrune;
-(void)setResistentToPrune:(BOOL)arg1 ;
-(BOOL)downloadIsTransient;
-(void)setDownloadIsTransient:(BOOL)arg1 ;
@end

