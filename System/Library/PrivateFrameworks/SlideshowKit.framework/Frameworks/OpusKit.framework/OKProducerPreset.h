/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSArray;

@interface OKProducerPreset : NSObject {

	NSString* _family;
	NSString* _name;
	NSDictionary* _presetDictionary;
	NSString* _localizedName;
	NSArray* _guidelines;
	NSArray* _audioURLs;

}
-(id)init;
-(void)dealloc;
-(id)uniqueIdentifier;
-(id)localizedName;
-(id)family;
-(BOOL)isDefault;
-(id)pluginIdentifier;
-(BOOL)isLocal;
-(id)backgroundColor;
-(BOOL)isAvailable;
-(id)initWithFamily:(id)arg1 name:(id)arg2 andDictionary:(id)arg3 ;
-(id)initWithFamily:(id)arg1 andPluginIdentifier:(id)arg2 ;
-(id)_settingKeyForType:(unsigned long long)arg1 ;
-(id)guidelines;
-(id)audioURLs;
-(BOOL)supportsSettingType:(unsigned long long)arg1 ;
@end

