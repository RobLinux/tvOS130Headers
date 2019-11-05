/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:59 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitCore/NSSecureCoding.h>

@class NSDictionary, PKColor, NSString;

@interface PKDiscoveryMedia : NSObject <NSSecureCoding> {

	long long _type;
	NSDictionary* _urls;
	double _width;
	double _height;
	PKColor* _backgroundColor;
	NSString* _passKitUIImageName;

}

@property (nonatomic,readonly) long long type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDictionary * urls;                        //@synthesize urls=_urls - In the implementation block
@property (nonatomic,readonly) double width;                               //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double height;                              //@synthesize height=_height - In the implementation block
@property (nonatomic,readonly) PKColor * backgroundColor;                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) NSString * passKitUIImageName;              //@synthesize passKitUIImageName=_passKitUIImageName - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(double)width;
-(double)height;
-(PKColor *)backgroundColor;
-(NSDictionary *)urls;
-(id)_remoteAssetForScale:(double)arg1 ;
-(id)imageDataFromCacheWithScale:(double)arg1 ;
-(void)downloadImageDataWithScale:(double)arg1 shouldWriteData:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(NSString *)passKitUIImageName;
@end

