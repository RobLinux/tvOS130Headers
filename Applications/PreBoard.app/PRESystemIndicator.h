/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:42 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PreBoard.app/PreBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SSIndicatorLight;

@interface PRESystemIndicator : NSObject {

	SSIndicatorLight* _sil;

}

@property (nonatomic,retain) SSIndicatorLight * sil;              //@synthesize sil=_sil - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)on;
-(void)off;
-(SSIndicatorLight *)sil;
-(void)flashMorseCodePattern:(id)arg1 ;
-(void)setSil:(SSIndicatorLight *)arg1 ;
@end

