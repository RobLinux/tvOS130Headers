/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:35 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UserActivity.framework/Agents/useractivityd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UASharedPasteboardManagerProtocol <NSObject>
@required
-(void)fetchRemotePasteboardStatus:(/*^block*/id)arg1;
-(void)clearLocalPasteboardInformation;
-(void)localPasteboardTypesDidChange:(id)arg1 forGeneration:(unsigned long long)arg2;
-(void)fetchRemotePasteboardTypesForProcess:(int)arg1 withCompletion:(/*^block*/id)arg2;
-(void)fetchRemotePasteboardForProcess:(int)arg1 withCompletion:(/*^block*/id)arg2;
-(void)setReturnPasteboardDataEarlyWithCompletion:(/*^block*/id)arg1;

@end

