/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:55:31 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/Siri.app/Siri
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AFConversationDelegate <NSObject>
@required
-(void)conversation:(id)arg1 didRemoveItemsWithIdentifiers:(id)arg2 atIndexPaths:(id)arg3 parentItemIdentifiers:(id)arg4;
-(void)conversation:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;
-(void)conversation:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
-(void)conversation:(id)arg1 presentationStateDidChangeForItemsAtIndexPaths:(id)arg2;

@end

