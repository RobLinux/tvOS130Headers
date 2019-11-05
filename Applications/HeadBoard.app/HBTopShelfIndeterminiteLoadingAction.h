/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:50:11 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/HeadBoard.app/HeadBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HeadBoard/HBTopShelfAction.h>

@class NSProgress;

@interface HBTopShelfIndeterminiteLoadingAction : HBTopShelfAction {

	NSProgress* _indeterminiteProgress;

}

@property (readonly) NSProgress * indeterminiteProgress;              //@synthesize indeterminiteProgress=_indeterminiteProgress - In the implementation block
-(id)init;
-(id)installApplicationProgress;
-(NSProgress *)indeterminiteProgress;
@end
