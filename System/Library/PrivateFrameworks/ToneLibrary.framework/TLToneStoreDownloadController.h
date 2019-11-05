/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:40 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol TLToneStoreDownloadController <NSObject>
@property (nonatomic,readonly) NSString * storeAccountName; 
@required
-(void)removeObserver:(id)arg1;
-(void)addObserver:(id)arg1;
-(void)openAlertToneStore;
-(void)openRingtoneStore;
-(void)redownloadAllTones;
-(NSString *)storeAccountName;

@end
