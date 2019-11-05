/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:46 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface VUIFavoritesRequestManager : NSObject {

	NSMutableDictionary* _ongoingEntityIDOperationDictionary;

}

@property (nonatomic,retain) NSMutableDictionary * ongoingEntityIDOperationDictionary;              //@synthesize ongoingEntityIDOperationDictionary=_ongoingEntityIDOperationDictionary - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id)_init;
-(NSMutableDictionary *)ongoingEntityIDOperationDictionary;
-(void)sendRequestForEntityID:(id)arg1 teamName:(id)arg2 action:(unsigned long long)arg3 ;
-(void)setOngoingEntityIDOperationDictionary:(NSMutableDictionary *)arg1 ;
@end

