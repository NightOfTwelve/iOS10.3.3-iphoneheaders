/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 30, 2017 at 11:25:03 PM Japan Standard Time
* Operating System: Version 10.3.3 (Build 14G60)
* Image Source: /Applications/MobileNotes.app/PlugIns/com.apple.mobilenotes.SharingExtension.appex/XPCServices/com.apple.mobilenotes.NotesImporter.xpc/com.apple.mobilenotes.NotesImporter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NotesImporterProtocol
@required
-(void)parseHTMLStringFromEvernoteContentString:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)countEvernoteNotesFromBookmarkData:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)parseTitleFromHTMLString:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)archiveEvernoteNotesFromBookmarkData:(id)arg1 completionBlock:(/*^block*/id)arg2;
-(void)unarchiveEvernoteNoteFromArchiveId:(id)arg1 noteArchiveId:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)unarchiveEvernoteResourceFromArchiveId:(id)arg1 resourceArchiveId:(id)arg2 completionBlock:(/*^block*/id)arg3;
-(void)cleanupArchiveId:(id)arg1 completionBlock:(/*^block*/id)arg2;

@end

