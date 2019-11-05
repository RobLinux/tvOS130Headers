/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TVPlayback.framework/TVPlayback
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVPlayback/TVPlayback-Structs.h>
#import <TVPlayback/TVPImageRepresentation.h>

@class NSBundle, NSString, UITraitCollection;

@interface _TVPNamedImageRepresentation : TVPImageRepresentation {

	NSBundle* _bundle;
	NSString* _imageName;
	UITraitCollection* _traitCollection;

}
-(CGImageRef)_originalImage;
-(id)initWithImageNamed:(id)arg1 inBundle:(id)arg2 compatibleWithTraitCollection:(id)arg3 ;
-(id)_originalImageCacheKey;
@end
