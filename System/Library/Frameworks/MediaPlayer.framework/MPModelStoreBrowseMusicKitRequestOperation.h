/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPStoreModelRequestOperation.h>

@class NSIndexSet;

@interface MPModelStoreBrowseMusicKitRequestOperation : MPStoreModelRequestOperation {

	NSIndexSet* _carPlayWhitelistedFCKinds;

}
-(id)configurationForLoadingModelDataWithStoreBagDictionary:(id)arg1 error:(id*)arg2 ;
-(void)produceResponseWithLoadedOutput:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_produceResponseWithParser:(id)arg1 results:(id)arg2 error:(id*)arg3 ;
-(id)browseURLWithStoreBagDictionary:(id)arg1 ;
-(id)radioGenresURLWithStoreBagDictionary:(id)arg1 ;
@end
