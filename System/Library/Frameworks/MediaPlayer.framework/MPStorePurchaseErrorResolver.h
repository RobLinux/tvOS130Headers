/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:19 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVErrorResolver.h>

@class NSNumber;

@interface MPStorePurchaseErrorResolver : MPAVErrorResolver {

	NSNumber* _storeAccountIdentifier;

}

@property (nonatomic,copy,readonly) NSNumber * storeAccountIdentifier;              //@synthesize storeAccountIdentifier=_storeAccountIdentifier - In the implementation block
-(NSNumber *)storeAccountIdentifier;
-(void)resolveError:(id)arg1 ;
-(id)initWithStoreAccountIdentifier:(id)arg1 ;
@end

