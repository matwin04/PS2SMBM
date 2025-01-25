import sqlite3
class DBManager:
    def __init__(self,dbPath):
        self.dbPath = dbPath
        self._initDB()
    def _initDB(self):
        with sqlite3.connect(self.dbPath) as conn:
            cursor = conn.cursor()
            with open('sql/init.sql','r') as sqlFile:
                cursor.executescript(sqlFile.read())
        conn.commit()
    def addGame()