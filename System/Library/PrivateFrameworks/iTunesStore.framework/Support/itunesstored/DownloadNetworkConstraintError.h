/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:47:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <itunesstored/itunesstored-Structs.h>
#import <itunesstored/DownloadError.h>
#import <itunesstored/NSCopying.h>

@interface DownloadNetworkConstraintError : DownloadError <NSCopying> {

	BOOL _canDownloadInITunes;
	long long _sizeLimit;

}

@property (assign,nonatomic) BOOL canDownloadInITunes;                    //@synthesize canDownloadInITunes=_canDownloadInITunes - In the implementation block
@property (assign,nonatomic) long long constrainedSizeLimit;              //@synthesize sizeLimit=_sizeLimit - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)copyUserNotification;
-(BOOL)canCoalesceWithError:(id)arg1 ;
-(BOOL)isValidError;
-(long long)constrainedSizeLimit;
-(BOOL)canDownloadInITunes;
-(id)_specificStringWithLocalizedKeyBase:(id)arg1 ;
-(id)_genericStringWithLocalizedKeyBase:(id)arg1 ;
-(void)setCanDownloadInITunes:(BOOL)arg1 ;
-(void)setConstrainedSizeLimit:(long long)arg1 ;
@end

