/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:16 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <TVContentPartnerKitUI/TVContentPartnerKitUI-Structs.h>
@class NSURL;

@interface TVCKStoreArtworkVariant : NSObject {

	NSURL* _artworkURL;
	CGSize _artworkSize;

}

@property (nonatomic,copy,readonly) NSURL * artworkURL;              //@synthesize artworkURL=_artworkURL - In the implementation block
@property (nonatomic,readonly) CGSize artworkSize;                   //@synthesize artworkSize=_artworkSize - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(NSURL *)artworkURL;
-(CGSize)artworkSize;
@end
