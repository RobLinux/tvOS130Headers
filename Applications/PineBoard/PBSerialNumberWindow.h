/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 1:54:30 PM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /Applications/PineBoard.app/PineBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoard/PineBoard-Structs.h>
#import <UIKitCore/UIWindow.h>

@class UILabel;

@interface PBSerialNumberWindow : UIWindow {

	UILabel* _deviceSerialNumberLabel;
	UILabel* _remoteSerialNumberLabel;

}
-(void)dealloc;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)_ignoresHitTest;
-(BOOL)_canBecomeKeyWindow;
-(void)_peripheralStateDidChangeNotification:(id)arg1 ;
-(void)_updateConnectedPeripheralSerialNumber;
@end

