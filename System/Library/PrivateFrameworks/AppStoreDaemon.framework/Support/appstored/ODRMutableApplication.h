/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:52 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/Support/appstored
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <appstored/ODRApplication.h>

@class NSString, NSURL;

@interface ODRMutableApplication : ODRApplication

@property (copy) NSString * adamID; 
@property (getter=isBeta) BOOL beta; 
@property (copy) NSString * bundleShortVersion; 
@property (copy) NSURL * bundleURL; 
@property (copy) NSString * bundleVersion; 
@property (copy) NSString * externalVersionID; 
@property (getter=isInstalled) BOOL installed; 
@property (getter=isMachineVPP) BOOL machineVPP; 
@property (copy) NSString * variantID; 
-(void)setInstalled:(BOOL)arg1 ;
-(void)setBeta:(BOOL)arg1 ;
-(void)setBundleVersion:(NSString *)arg1 ;
-(void)setAdamID:(NSString *)arg1 ;
-(void)setVariantID:(NSString *)arg1 ;
-(void)setBundleURL:(NSURL *)arg1 ;
-(void)setBundleShortVersion:(NSString *)arg1 ;
-(void)setExternalVersionID:(NSString *)arg1 ;
-(void)setMachineVPP:(BOOL)arg1 ;
@end

