/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:38 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SCROSBrailleDisplayManagerDelegate <NSObject>
@required
-(void)handleBrailleKeypress:(id)arg1;
-(void)handleBrailleReplaceTextRange:(NSRange)arg1 withString:(id)arg2 cursor:(unsigned long long)arg3;
-(void)handleBrailleInsertedUntranslatedText:(id)arg1 speakLiterally:(BOOL)arg2;
-(void)handleBrailleDeletedUntranslatedText:(id)arg1 speakLiterally:(BOOL)arg2;
-(void)handleBrailleKeyWillMemorize:(id)arg1;
-(void)handleBrailleKeyMemorize:(id)arg1;
-(void)handleBrailleDidDisplay:(id)arg1;
-(void)handleBrailleDidPanLeft:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
-(void)handleBrailleDidPanRight:(id)arg1 elementToken:(id)arg2 appToken:(id)arg3;
-(void)handleBrailleDidShowPreviousAnnouncement:(id)arg1;
-(void)handleBrailleDidShowNextAnnouncement:(id)arg1;
-(void)handleFailedToLoadBluetoothDevice:(id)arg1;
-(void)handleBrailleTableFailedToLoad:(id)arg1;
-(void)handleDisplayModeChanged:(id)arg1;
-(void)handleBrailleDriverDidLoad;
-(void)configurationDidChange;
-(void)handleBrailleDriverDisconnected;
-(void)handleStartEditing;
-(void)handleCopyStringToClipboard:(id)arg1;
-(void)handlePlayBorderHitSound;
-(void)handlePlayCommandNotSupportedSound;

@end

