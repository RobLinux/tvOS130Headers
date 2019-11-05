/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSURL, NSString;

@interface UIPrinter : NSObject {

	id _printerInfo;
	NSURL* URL;

}

@property (copy,readonly) NSURL * URL; 
@property (copy,readonly) NSString * displayName; 
@property (copy,readonly) NSString * displayLocation; 
@property (readonly) long long supportedJobTypes; 
@property (copy,readonly) NSString * makeAndModel; 
@property (readonly) BOOL supportsColor; 
@property (readonly) BOOL supportsDuplex; 
+(id)printerWithURL:(id)arg1 ;
-(id)init;
-(NSURL *)URL;
-(NSString *)displayName;
-(id)_initWithURL:(id)arg1 ;
-(NSString *)displayLocation;
-(id)_initWithPrinter:(id)arg1 ;
-(id)_internalPrinter;
-(void)contactPrinter:(/*^block*/id)arg1 ;
-(NSString *)makeAndModel;
-(long long)supportedJobTypes;
-(BOOL)supportsColor;
-(BOOL)supportsDuplex;
@end

