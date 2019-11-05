/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:00:51 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/TVPhotos.app/TVPhotos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVContentPartnerKitUI/TVCKDataCollection.h>

@class ACAccount;

@interface TVPMyPhotoStream : TVCKDataCollection {

	ACAccount* _appleAccount;

}

@property (nonatomic,retain) ACAccount * appleAccount;              //@synthesize appleAccount=_appleAccount - In the implementation block
+(id)idForAppleAccount:(id)arg1 ;
+(id)collectionWithDataClient:(id)arg1 accessObject:(id)arg2 ;
-(ACAccount *)appleAccount;
-(id)initWithDataClient:(id)arg1 ;
-(id)concreteValueForProperty:(id)arg1 ;
-(void)setAppleAccount:(ACAccount *)arg1 ;
-(id)initWithDataClient:(id)arg1 appleAccount:(id)arg2 ;
@end

