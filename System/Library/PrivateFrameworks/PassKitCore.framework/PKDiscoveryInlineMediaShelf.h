/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:43:03 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/PKDiscoveryShelf.h>

@class PKDiscoveryMedia, NSString;

@interface PKDiscoveryInlineMediaShelf : PKDiscoveryShelf {

	PKDiscoveryMedia* _media;
	NSString* _captionKey;
	long long _displayType;
	NSString* _localizedCaption;

}

@property (nonatomic,retain) NSString * localizedCaption;              //@synthesize localizedCaption=_localizedCaption - In the implementation block
@property (nonatomic,readonly) PKDiscoveryMedia * media;               //@synthesize media=_media - In the implementation block
@property (nonatomic,readonly) NSString * captionKey;                  //@synthesize captionKey=_captionKey - In the implementation block
@property (nonatomic,readonly) long long displayType;                  //@synthesize displayType=_displayType - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(long long)displayType;
-(PKDiscoveryMedia *)media;
-(void)localizeWithBundle:(id)arg1 ;
-(void)localizeWithBundle:(id)arg1 table:(id)arg2 ;
-(NSString *)captionKey;
-(NSString *)localizedCaption;
-(void)setLocalizedCaption:(NSString *)arg1 ;
@end

